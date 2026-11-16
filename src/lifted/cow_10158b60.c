/* f_0x10158b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10158b60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_ebx = g->ebx;

    if (self != 0u)
    {
        g->esp = sp0 - 0x14u;
        t1 = cow_call_regs(g, COW_IMG(0x101597f0u), in_eax, self, in_edx, 1, 0);
        t2 = g->edx;
        edx = t2;
        ebx = t1;
    }
    else
    {
        edx = in_edx;
        ebx = 0u;
    }
    if ((rd32(self + 0x60u) & 4u) == 0u)
    {
        esi = 0u;
        loc_4 = self;
    }
    else
    {
        eax = rd32(self + 0x60u);
        if (ebx == 0u)
        {
            esi = 0u;
            loc_4 = self;
        }
        else
        {
            if ((eax & 8u) == 0u)
            {
                loc_4 = (self & 0xffffff00u) | 1u;
            }
            else
            {
                loc_4 = self & 0xffffff00u;
            }
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10203920u), rd32(COW_IMG(0x106643a8u)), 0);
            t3 = g->edx;
            t4 = rd32(ebx + 4u);
            g->ebx = ebx;
            g->edx = t3;
            t5 = cow_call_regs(g, COW_IMG(0x102031f0u), t4, g->ecx, g->edx, 0, 3, t4, loc_4, 1u);
            t6 = g->edx;
            if ((uint8_t)t5 != 1u)
            {
                edx = t6;
                esi = 0u;
            }
            else
            {
                eax = t5;
                edx = t6;
                ebp = loc_4;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t7 = cow_stdcall(g, COW_IMG(0x102034e0u), 1, ebp);
                t8 = g->edx;
                edx = t8;
                esi = t7;
            }
        }
    }
    if ((rd32(self + 0x60u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x60u);
        goto L_10158c20;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t10 = g->edx;
    if (esi != t9) goto L_10158c35;
    eax = t9;
    edx = t10;
    if ((rd8(self + 0x60u) & 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x60u);
        loc_4 = (loc_4 & 0xffffff00u) | 1u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x60u);
        loc_4 = (loc_4 & 0xffffff00u) | 1u;
        loc_4 = loc_4 & 0xffffff00u;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x10203920u), rd32(COW_IMG(0x106643a8u)), 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_stdcall(g, COW_IMG(0x102034e0u), 1, loc_4);
    t14 = g->edx;
    t15 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t13 != t15)
    {
        esi = t13;
        goto L_10158c35;
    }
    g->ebx = in_ebx;
    return 0u;
L_10158c20: ;
    if (esi != 0u) goto L_10158c35;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10081550u), eax, COW_IMG(0x1047d600u), edx);
L_10158c35: ;
    g->ebx = in_ebx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10158b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10158b60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
