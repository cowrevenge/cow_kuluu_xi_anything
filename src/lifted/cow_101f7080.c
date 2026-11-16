/* f_0x101f7080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f7080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 < 0)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)arg1 <= (int16_t)rd16(self + 0x22u))
        {
            eax = (in_eax & 0xffff0000u) | rd16(self + 0x22u);
            wr16(self + 0x1eu, (uint16_t)arg1);
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | rd16(self + 0x22u);
            wr16(self + 0x1eu, (uint16_t)eax);
        }
        g->edi = self;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x101f66b0u), eax, self, in_edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        if ((int32_t)arg2 <= 0) goto L_101f70c8;
        if ((int32_t)arg2 > (int16_t)rd16(self + 0x18u))
        {
            edx = (uint32_t)(int16_t)rd16(self + 0x18u);
            goto L_101f70c4;
        }
        edx = (uint32_t)(int16_t)rd16(self + 0x18u);
        eax = arg2;
        loc_10 = arg2;
L_101f70dd: ;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, loc_10, 0u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
L_101f70e2: ;
        t6 = rd32(self + 8u);
        wr16(self + 0x24u, rd16(t6 + 0x4cu));
        eax = t6;
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x101f6720u), self, 1, 0u);
    g->edi = in_edi;
    return t7;
L_101f70c4: ;
    if ((int32_t)arg2 > 0) goto L_101f70e2;
L_101f70c8: ;
    if ((int32_t)arg1 <= (int16_t)rd16(self + 0x22u))
    {
        eax = (arg2 & 0xffff0000u) | rd16(self + 0x22u);
        edx = (uint32_t)(int16_t)rd16(self + 0x22u);
        loc_10 = 1u;
    }
    else
    {
        eax = (arg2 & 0xffff0000u) | rd16(self + 0x22u);
        edx = (uint32_t)(int16_t)rd16(self + 0x22u);
        t3 = arg1 - eax + 1u;
        loc_10 = t3;
    }
    goto L_101f70dd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7080(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
