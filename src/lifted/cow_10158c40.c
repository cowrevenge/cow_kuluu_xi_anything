/* f_0x10158c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10158c40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (self == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x101597f0u), in_eax, self, in_edx, 1, 0);
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    if (ecx == 0u) goto L_10158c86;
    if (self == 0u)
    {
        eax = 0u;
    }
    else
    {
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x101598a0u), 0u, self, g->edx, 1, 0);
        t4 = g->ecx;
        eax = t3;
        ecx = t4;
    }
    t5 = rd32(self + 0x64u);
    t6 = rd32(self + 0x60u);
    if ((uint8_t)arg1 != 1u)
    {
        ecx = t5;
        edx = t6;
        loc_8 = t5;
        loc_c = t6;
        loc_10 = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_cdecl(g, COW_IMG(0x10083b40u), 3, loc_10, loc_c, loc_8);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    else
    {
        ecx = t5;
        edx = t6;
        loc_8 = t5;
        loc_c = t6;
        loc_10 = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x10083d00u), 3, loc_10, loc_c, loc_8);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (eax != 0u) goto L_10158c98;
L_10158c86: ;
    if ((rd32(self + 0x60u) >> 8u & 2u) != 0u)
    {
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    }
L_10158c98: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10158c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10158c40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
