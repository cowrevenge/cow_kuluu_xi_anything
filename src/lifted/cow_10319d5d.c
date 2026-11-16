/* f_0x10319d5d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10319d5d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_edi);
    if (arg2 == 0u) goto L_10319df1;
    if (rd8(arg2) == 0u) goto L_10319df1;
    if (arg1 != 0u)
    {
        ecx = self;
        edx = in_edx;
        edi = arg1;
        goto L_10319d9e;
    }
    wr32(sp0 - 0x10u, 0x104u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x104u, in_edi, in_ebx);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        edi = t1;
        goto L_10319d97;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t4 = g->edx;
    wr32(t3, 0xcu);
    edx = t4;
L_10319de9: ;
    eax = 0u;
L_10319dfe: ;
    g->ebx = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10319d97: ;
    wr32(sp0 + 0xcu, 0x104u);
    ecx = 0x104u;
L_10319d9e: ;
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, edi);
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t5);
    wr32(sp0 - 0x1cu, arg2);
    g->eax = sp0 + 8u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, rd32(COW_IMG(0x103290d4u)), ecx, 4, arg2, t5, edi, sp0 + 8u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 < rd32(sp0 + 0xcu))
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10319dcc;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    if (arg1 == 0u)
    {
        wr32(sp0 - 0x10u, edi);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t9 = g->edx;
        ecx = rd32(sp0 - 0x10u);
        edx = t9;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t11 = g->edx;
    wr32(t10, 0x22u);
    edx = t11;
    goto L_10319de9;
L_10319dcc: ;
    if (eax != 0u) goto L_10319ded;
    if (arg1 == eax)
    {
        wr32(sp0 - 0x10u, edi);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t12 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t13 = g->edx;
        eax = t12;
        ecx = rd32(sp0 - 0x10u);
        edx = t13;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x10u, t14);
    g->edx = t16;
    cow_cdecl(g, COW_IMG(0x10319c16u), 1, t14);
    t17 = g->edx;
    edx = t17;
    goto L_10319de9;
L_10319ded: ;
    eax = edi;
    goto L_10319dfe;
L_10319df1: ;
    t18 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x10u, t18);
    wr32(sp0 - 0x14u, arg1);
    g->esp = sp0 - 0xcu;
    t19 = cow_call_regs(g, COW_IMG(0x10323cb9u), g->eax, self, in_edx, 1, 2, arg1, t18);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    goto L_10319dfe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319d5d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319d5d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
