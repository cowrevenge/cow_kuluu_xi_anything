/* f_0x10072610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10072610(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr8(COW_IMG(0x1047d134u), (uint8_t)arg6);
    t1 = rd32(self + 0x24u) & 0x7fu;
    if ((rd32(self + 0x24u) & 0x7fu) != 1u)
    {
        loc_4 = t1;
        g->edx = self;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x10072270u), self, 0);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    else
    {
        loc_4 = t1;
        eax = self;
        edx = self;
    }
    if (eax == 0u) goto L_100726b9;
L_10072654: ;
    if ((rd32(eax + 0x24u) & 0x7fu) == 1u)
    {
        if (rd32(eax + 0x38u) == arg5)
        {
            if (rd32(eax + 0x3cu) == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(eax + 0x3cu);
                eax = rd32(eax);
            }
        }
    }
    if (arg2 != 0u) goto L_10072691;
    if ((rd32(eax + 0x20u) & arg4) != arg3) goto L_100726a8;
L_1007267e: ;
    t5 = rd32(eax + 0x14u);
    wr32(arg1, t5);
    return arg1;
L_10072691: ;
    if ((rd32(eax + 0x24u) & 0x7fu) != arg2) goto L_100726a8;
    if (arg3 == 0u) goto L_1007267e;
    if ((rd32(eax + 0x20u) & arg4) == arg3) goto L_100726c4;
L_100726a8: ;
    if (rd32(eax + 8u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 8u);
        eax = rd32(eax);
    }
    if (eax != 0u) goto L_10072654;
L_100726b9: ;
    if (loc_4 != 1u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t6 = cow_thiscall(g, COW_IMG(0x10072270u), edx, 0);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = edx;
    }
    wr32(eax + 0x38u, arg5);
    if (rd32(eax + 0x28u) == 0u)
    {
        eax = rd32(eax + 0x28u);
        goto L_10072720;
    }
    eax = rd32(eax + 0x28u);
    if (rd32(eax) == 0u) goto L_1007271c;
    edx = rd32(eax);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall(g, COW_IMG(0x10072270u), self, 0);
    t9 = g->edx;
    if (t8 == t9)
    {
        eax = t8;
        goto L_1007271c;
    }
    edx = t9;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10072610u), arg6, edx, g->edx, 0, 6, arg1, arg2, arg3, arg4, arg5, arg6);
    return arg1;
L_100726c4: ;
    t4 = rd32(eax + 0x14u);
    wr32(arg1, t4);
    return arg1;
L_1007271c: ;
    edx = self;
L_10072720: ;
    if (rd8(COW_IMG(0x1047d134u)) != 0u) goto L_1007275a;
    if (rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u) == rd32(edx + 0x14u)) goto L_1007275a;
    eax = rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u);
    edx = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10072610u), eax, rd32(eax), g->edx, 0, 6, arg1, arg2, arg3, arg4, arg5, 0u);
    return arg1;
L_1007275a: ;
    wr32(arg1, 0u);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10072610(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
