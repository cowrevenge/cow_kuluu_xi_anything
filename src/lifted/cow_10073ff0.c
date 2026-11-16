/* f_0x10073ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10073ff0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    if (arg4 != 0xffffffffu) goto L_10074019;
    wr32(sp0 - 8u, arg5);
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    g->edx = arg3;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10073cd0u), 4, arg1, arg2, arg3, arg5);
    t1 = g->edx;
    g->edx = t1;
    return arg1;
L_10074019: ;
    wr32(sp0 - 8u, arg4);
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, sp0 + 0xcu);
    g->edx = sp0 + 0xcu;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10073e50u), 4, sp0 + 0xcu, arg2, arg3, arg4);
    t3 = g->edx;
    if (rd32(t2) != 0u)
    {
        ecx = rd32(t2);
        edx = t3;
        goto L_100740ad;
    }
    edx = t3;
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, 0x4d727400u);
    wr32(sp0 - 0x10u, arg5);
    g->edx = edx;
    t4 = rd32(COW_IMG(0x1047d140u));
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x10074f30u), t4, 2, arg5, 0x4d727400u);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        wr32(sp0 - 0xcu, eax);
        wr32(sp0 - 0x10u, 4u);
        wr32(sp0 - 0x14u, 0x49u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x49u, 4u);
        t9 = g->edx;
        g->esp = sp0 - 8u;
        t10 = cow_fastcall(g, COW_IMG(0x100748f0u), t8, t9, 0);
        t11 = g->edx;
        wr8(COW_IMG(0x1047d13cu), 1u);
        if (t8 == 0u)
        {
            eax = t10;
            edx = t11;
            esi = 0u;
        }
        else
        {
            eax = t10;
            edx = t11;
            esi = t8;
            g->esp = sp0 - 8u;
            t12 = cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
            t13 = g->edx;
            wr32(esi, COW_IMG(0x1032c908u));
            wr32(esi + 0x38u, 0u);
            wr32(esi + 0x45u, 0u);
            eax = t12;
            edx = t13;
        }
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10074a00u), esi, 0);
        t14 = g->edx;
        wr32(sp0 - 0xcu, arg5);
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        g->edx = t14;
        cow_thiscall(g, COW_IMG(0x10072c30u), esi, 2, sp0 + 0xcu, arg5);
        t15 = g->edx;
        edx = t15;
    }
    t16 = rd32(sp0 - 8u);
    t17 = rd32(sp0 - 4u);
    wr32(arg1, 0u);
    g->ebx = t16;
    g->esi = t17;
    g->edx = edx;
    return arg1;
L_100740ad: ;
    t18 = rd32(sp0 - 4u);
    wr32(arg1, ecx);
    g->esi = t18;
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10073ff0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
