/* f_0x102c1a72 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Unpacks indexed color data from a compressed buffer into an output buffer, then expands indices to RGB or RGBA using lookup tables.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c1a72(Guest* g, uint32_t self, uint32_t buf, uint32_t rgb_table, uint32_t lut, uint32_t threshold)
{
    (void)g;

    if (rd8(self + 8u) != 3u) {
        return;
    }

    uint32_t eax = rd32(self);
    uint32_t cl = rd8(self + 9u);

    if (cl < 8u) {
        uint32_t ecx_tmp = cl - 1u;
        
        /* Case: bits_per_pixel == 1 */
        if (ecx_tmp == 0u) {
            uint32_t dest = eax + buf - 1u;
            uint32_t src = ((eax - 1u) >> 3) + buf;
            uint32_t shift = 7u - ((eax - 1u) & 7u);
            
            if (eax != 0u) {
                for (uint32_t i = 0; i < eax; ++i) {
                    wr8(dest, (rd8(src) >> shift) & 1u);
                    dest--;
                    if (shift == 7u) {
                        shift = 0u;
                        src--;
                    } else {
                        shift++;
                    }
                }
            }
        } 
        /* Case: bits_per_pixel == 2 */
        else if (ecx_tmp == 1u) {
            uint32_t dest = eax + buf - 1u;
            uint32_t src = ((eax - 1u) >> 2) + buf;
            uint32_t shift = (3u - ((eax - 1u) & 3u)) * 2u;
            
            if (eax != 0u) {
                for (uint32_t i = 0; i < eax; ++i) {
                    wr8(dest, (rd8(src) >> shift) & 3u);
                    dest--;
                    if (shift == 6u) {
                        shift = 0u;
                        src--;
                    } else {
                        shift += 2u;
                    }
                }
            }
        } 
        /* Case: bits_per_pixel == 4 */
        else if (ecx_tmp == 3u) {
            uint32_t dest = eax + buf - 1u;
            uint32_t src = ((eax - 1u) >> 1) + buf;
            uint32_t shift = (eax & 1u) << 2;
            
            if (eax != 0u) {
                for (uint32_t i = 0; i < eax; ++i) {
                    wr8(dest, (rd8(src) >> shift) & 0xFu);
                    dest--;
                    if (shift == 4u) {
                        shift = 0u;
                        src--;
                    } else {
                        shift += 4u;
                    }
                }
            }
        }

        wr8(self + 9u, 8u);
        wr8(self + 0xBu, 8u);
        wr32(self + 4u, eax);
    }

    if (rd8(self + 9u) != 8u) {
        return;
    }

    uint32_t edx = eax + buf - 1u; /* Pointer to the last unpacked byte */
    uint32_t ebx = 0;

    if (lut == 0u) {
        /* RGB expansion: 3 bytes per pixel */
        ebx = eax * 3u;
        uint32_t ecx = ebx + buf - 1u;
        
        if (eax != 0u) {
            for (uint32_t i = 0; i < eax; ++i) {
                uint32_t idx = rd8(edx);
                wr8(ecx,     rd8(rgb_table + idx * 3u + 2u));
                wr8(ecx - 1u, rd8(rgb_table + idx * 3u + 1u));
                wr8(ecx - 2u, rd8(rgb_table + idx * 3u));
                
                ecx -= 3u;
                edx--;
            }
        }
        
        wr8(self + 0xBu, 0x18u);
        wr8(self + 8u, 2u);
        wr8(self + 0xAu, 3u);
    } else {
        /* RGBA expansion: 4 bytes per pixel */
        ebx = eax * 4u;
        uint32_t ecx = ebx + buf - 1u;
        
        if (eax != 0u) {
            for (uint32_t i = 0; i < eax; ++i) {
                uint32_t idx = rd8(edx);
                
                /* Alpha channel from lut or 0xFF */
                if ((int32_t)idx < (int32_t)threshold) {
                    wr8(ecx, rd8(lut + idx));
                } else {
                    wr8(ecx, 0xFFu);
                }
                
                /* RGB channels from rgb_table */
                wr8(ecx - 1u, rd8(rgb_table + idx * 3u + 2u));
                wr8(ecx - 2u, rd8(rgb_table + idx * 3u + 1u));
                wr8(ecx - 3u, rd8(rgb_table + idx * 3u));
                
                ecx -= 4u;
                edx--;
            }
        }
        
        wr8(self + 0xBu, 0x20u);
        wr8(self + 8u, 6u);
        wr8(self + 0xAu, 4u);
    }

    wr8(self + 9u, 8u);
    wr32(self + 4u, ebx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c1a72(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    
    const uint32_t self       = rd32(sp0 + 4u);
    const uint32_t buf        = rd32(sp0 + 8u);
    const uint32_t rgb_table  = rd32(sp0 + 12u);
    const uint32_t lut        = rd32(sp0 + 16u);
    const uint32_t threshold  = rd32(sp0 + 20u);

    cow_fn_102c1a72(g, self, buf, rgb_table, lut, threshold);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
