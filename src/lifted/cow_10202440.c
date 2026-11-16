/* f_0x10202440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10202440(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1013f000u), in_eax, rd32(COW_IMG(0x10578214u)), g->edx, 1, 0);
    t2 = g->edx;
    if ((uint16_t)t1 == 0xffffu)
    {
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = t2;
        esi = t1;
        wr32(sp0 - 0x14u, in_ebx);
        wr32(sp0 - 0x18u, in_ebp);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0x80808080u);
        t3 = (uint32_t)(int16_t)arg2 + 2u;
        wr32(sp0 - 0x28u, t3);
        t4 = (uint32_t)(int16_t)arg1 - 0x1cu;
        wr32(sp0 - 0x2cu, t4);
        g->edx = edx;
        t5 = rd32(self + 0x34u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t5, 5, t4, t3, 0x80808080u, 0u, 0u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x1cu, arg3);
        g->eax = arg3;
        g->edx = t7;
        t8 = rd16(arg3 + (uint16_t)esi * 2u + 0x3cu);
        t9 = cow_thiscall_cdecl(g, COW_IMG(0x10201eb0u), t6, 1, arg3);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 != 0u)
        {
            eax = t9;
            ecx = t10;
            goto L_102024aa;
        }
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = t8;
        if ((uint16_t)esi != 0xffffu) goto L_102024be;
L_102024aa: ;
        wr32(sp0 - 0x1cu, COW_IMG(0x1038541cu));
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->ecx = ecx;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x1038541cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
L_102024ed: ;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        t18 = cow_cdecl(g, COW_IMG(0x101c9550u), 3, sp0 - 8u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        wr32(sp0 - 0x20u, 0x80808080u);
        t19 = t18 + 1u - (uint32_t)((int32_t)(t18 + 1u) >> 0x1fu);
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x28u, arg2 + 2u);
        t20 = arg1 - (uint32_t)((int32_t)t19 >> 1u) - 0xfu;
        wr32(sp0 - 0x2cu, t20);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, t20, arg2 + 2u, sp0 - 8u, 0x80808080u, sp0 - 8u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        ebx = rd32(sp0 - 0x14u);
        ebp = rd32(sp0 - 0x18u);
    }
    g->ebx = ebx;
    g->ebp = ebp;
    return;
L_102024be: ;
    if ((uint16_t)esi != 0u)
    {
        wr32(sp0 - 0x1cu, (uint32_t)(int16_t)esi);
        wr32(sp0 - 0x20u, COW_IMG(0x10385290u));
        wr32(sp0 - 0x24u, sp0 - 8u);
        g->ecx = (uint32_t)(int16_t)esi;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10385290u), (uint32_t)(int16_t)esi, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
    }
    else
    {
        wr32(sp0 - 0x1cu, COW_IMG(0x10362054u));
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10362054u), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    goto L_102024ed;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10202440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
