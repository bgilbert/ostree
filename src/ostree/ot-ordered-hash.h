/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2013 Colin Walters <walters@verbum.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the licence or (at
 * your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __OT_ORDERED_HASH_H__
#define __OT_ORDERED_HASH_H__

#include <gio/gio.h>

G_BEGIN_DECLS

typedef struct {
  GPtrArray  *order;
  GHashTable *table;
} OtOrderedHash;

OtOrderedHash *ot_ordered_hash_new (void);
void ot_ordered_hash_free (OtOrderedHash *ohash);
void ot_ordered_hash_cleanup (void *loc);
void ot_ordered_hash_replace_key_take (OtOrderedHash  *ohash,
                                       char         *key,
                                       const char   *value);
void ot_ordered_hash_replace_key (OtOrderedHash  *ohash,
                                  const char   *key,
                                  const char   *val);


G_END_DECLS

#endif /* __OT_ORDERED_HASH_H__ */
