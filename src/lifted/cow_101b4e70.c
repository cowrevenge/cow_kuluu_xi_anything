/* f_0x101b4e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b4e70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    if ((int32_t)rd32(self + 0x1c8u) < (int32_t)rd32(self + 0x1c4u))
    {
        eax = rd32(self + 0x1c4u);
        edx = rd32(self + 0x1c8u);
        if ((int32_t)(eax - edx) < 2) goto L_101b4ee7;
        eax = eax - edx;
        if (rd8(edx + self) != 0x85u)
        {
            ecx = edx + self;
            goto L_101b4ea6;
        }
        ecx = edx + self;
        if (rd8(ecx + 1u) != 0x65u) goto L_101b4ea6;
        loc_c = eax - 2u;
L_101b4ecf: ;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10314a10u), 5, ecx, ecx + 2u, loc_c, in_esi, in_ebx);
        eax = rd32(self + 0x1c4u) - 2u;
L_101b4f0e: ;
        wr32(self + 0x1c4u, eax);
        wr8(eax + self, 0u);
    }
    return 0u;
L_101b4ea6: ;
    if ((int32_t)eax < 2) goto L_101b4ee7;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1011c900u), 1, edx + self);
    if ((uint8_t)t1 != 0u) goto L_101b4ee7;
    t2 = rd32(self + 0x1c4u) - rd32(self + 0x1c8u) - 2u;
    ecx = self + rd32(self + 0x1c8u);
    edx = t2;
    loc_c = t2;
    goto L_101b4ecf;
L_101b4ee7: ;
    t3 = rd32(self + 0x1c4u) - rd32(self + 0x1c8u) - 1u;
    t4 = self + rd32(self + 0x1c8u) + 1u;
    t5 = self + rd32(self + 0x1c8u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10314a10u), 5, t5, t4, t3, in_esi, in_ebx);
    eax = rd32(self + 0x1c4u) - 1u;
    goto L_101b4f0e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b4e70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
