/* f_0x102eb17e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102eb17e(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    if (rd32(sp0 + 4u) == 0u) goto L_102eb21c;
    esi = rd32(sp0 + 4u);
    if (rd8(esi) == 0u) goto L_102eb21c;
    ecx = (self & 0xffffff00u) | rd8(esi);
    eax = 0u;
    edx = esi;
L_102eb19e: ;
    if ((int8_t)ecx > 119)
    {
        ecx = (uint32_t)(int8_t)ecx;
        goto L_102eb1e0;
    }
    zf = (uint32_t)(int8_t)ecx == 0x77u;
    ecx = (uint32_t)(int8_t)ecx;
    if (zf) goto L_102eb1d6;
    if (ecx == 0x61u) goto L_102eb1d6;
    ecx = ecx - 0x61u;
    if (ecx == 1u) goto L_102eb1eb;
    ecx = ecx - 1u;
    if (ecx == 5u) goto L_102eb1f5;
    ecx = ecx - 5u;
    if (ecx != 0xbu)
    {
        ecx = ecx - 0xbu;
        goto L_102eb1ff;
    }
L_102eb1ba: ;
    eax = eax | 0x10000u;
    ecx = 0u;
L_102eb1c1: ;
    if (edx == esi) goto L_102eb1ca;
    if (ecx <= rd32(sp0 + 4u)) goto L_102eb1ff;
L_102eb1ca: ;
    wr32(sp0 + 4u, ecx);
    if (rd8(edx + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edx + 1u);
        edx = edx + 1u;
        goto L_102eb19e;
    }
L_102eb221: ;
    return eax;
L_102eb1d6: ;
    eax = eax | 0x80000u;
    ecx = 3u;
    goto L_102eb1c1;
L_102eb1e0: ;
    if (ecx == 0x78u) goto L_102eb1ba;
    ecx = ecx - 0x78u;
    if (ecx == 1u) goto L_102eb1f5;
    ecx = ecx - 1u;
    if (ecx != 1u)
    {
        ecx = ecx - 1u;
        goto L_102eb1ff;
    }
L_102eb1eb: ;
    eax = eax | 0x40000u;
    ecx = 2u;
    goto L_102eb1c1;
L_102eb1f5: ;
    eax = eax | 0x20000u;
    ecx = 1u;
    goto L_102eb1c1;
L_102eb1ff: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, COW_IMG(0x10346784u), esi, in_esi, in_ebx);
    wr32(self + 0x98u, 1u);
    eax = 0u;
    goto L_102eb221;
L_102eb21c: ;
    eax = 0xf0000u;
    goto L_102eb221;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eb17e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eb17e(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
