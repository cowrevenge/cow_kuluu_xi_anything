/* f_0x10195160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10195160(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if ((arg1 & 2u) == 0u) goto L_101951ba;
    if ((int32_t)(rd32(self - 4u) - 1u) < 0)
    {
        eax = rd32(self - 4u) - 1u;
        ecx = rd32(self - 4u) * 5u;
        edx = rd32(self - 4u) * 0xbu;
    }
    else
    {
        eax = rd32(self - 4u) - 1u;
        edx = rd32(self - 4u) * 0xbu;
        esi = self + rd32(self - 4u) * 0x2cu;
        ebx = eax + 1u;
L_10195182: ;
        t1 = rd32(esi - 8u);
        wr32(esi - 0x2cu, COW_IMG(0x10336a04u));
        if (t1 == 0u)
        {
            ecx = t1;
            esi = esi - 0x2cu;
        }
        else
        {
            ecx = t1;
            esi = esi - 0x2cu;
            g->eax = rd32(ecx);
            g->edx = edx;
            t2 = rd32(ecx);
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall(g, rd32(t2), ecx, 1, 1u);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(esi + 0x24u, 0u);
            eax = t3;
            ecx = t4;
            edx = t5;
        }
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_10195182;
        }
    }
    if (arg1 & 1u)
    {
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self - 4u);
        t6 = g->edx;
        edx = t6;
    }
    g->edx = edx;
    return self - 4u;
L_101951ba: ;
    t7 = rd32(self + 0x24u);
    wr32(self, COW_IMG(0x10336a04u));
    if (t7 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        ecx = t7;
        edx = in_edx;
    }
    else
    {
        ecx = t7;
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = rd32(ecx);
        t8 = rd32(ecx);
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, rd32(t8), ecx, 1, 1u);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(self + 0x24u, 0u);
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    if (arg1 & 1u)
    {
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, self);
        t12 = g->edx;
        edx = t12;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10195160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10195160(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
