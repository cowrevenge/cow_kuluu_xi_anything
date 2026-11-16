/* f_0x10266bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10266bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (arg5 != 0u) goto L_10266bd8;
    return 0x80004003u;
L_10266bd8: ;
    wr32(arg5, 0u);
    if (arg3 == 0u) goto L_10266bf3;
    return 0x8002802bu;
L_10266bf3: ;
    if (rd32(arg1) != 0u)
    {
        edx = in_edx;
        goto L_10266cb1;
    }
    g->eax = arg3;
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x102659b0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10266c1d;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t4 | 0x80070000u;
L_10266c1d: ;
    wr32(sp0 - 0x14u, COW_IMG(0x1034093cu));
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10329138u));
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, t5, ecx, 2, esi, COW_IMG(0x1034093cu));
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edi = t5;
        goto L_10266c41;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t9 | 0x80070000u;
L_10266c41: ;
    wr32(sp0 - 0x14u, sp0 + 0x14u);
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, COW_IMG(0x1033ef08u));
    g->eax = eax;
    g->edx = arg4;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, eax, sp0 + 0x14u, 5, COW_IMG(0x1033ef08u), 1u, 0u, arg4, sp0 + 0x14u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 >= 0) goto L_10266c88;
    eax = t10;
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0x14u, COW_IMG(0x10340930u));
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, edi, ecx, 2, esi, COW_IMG(0x10340930u));
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        edx = t15;
        goto L_10266c78;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t16 | 0x80070000u;
L_10266c78: ;
    wr32(sp0 - 0x14u, sp0 + 0x14u);
    wr32(sp0 - 0x18u, COW_IMG(0x1034094cu));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, eax, sp0 + 0x14u, 2, COW_IMG(0x1034094cu), sp0 + 0x14u);
    if ((int32_t)t17 < 0)
    {
        eax = t17;
        goto L_10266cc0;
    }
L_10266c88: ;
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg5);
    g->eax = arg5;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, rd32(rd32(arg5) + 0x18u), arg2, 3, arg5, arg2, arg1);
    t19 = g->ecx;
    wr32(sp0 - 0x14u, arg5);
    g->edx = rd32(arg5);
    t20 = rd32(arg5);
    cow_thiscall(g, rd32(t20 + 8u), t19, 1, arg5);
    t21 = g->edx;
    if ((int32_t)t18 >= 0)
    {
        edx = t21;
        goto L_10266cb1;
    }
    esi = t18;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return esi;
L_10266cb1: ;
    wr32(arg5, rd32(arg1));
    wr32(sp0 - 0x14u, rd32(arg1));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(rd32(arg1)) + 4u), rd32(rd32(arg1)), 1, rd32(arg1));
    eax = 0u;
L_10266cc0: ;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10266bc0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
