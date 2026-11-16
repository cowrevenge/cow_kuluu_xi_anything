/* f_0x10126970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10126970(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        loc_4 = t1;
L_10126987: ;
        wr32(sp0 - 0x14u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t4 = g->edx;
        if (arg1 == t3)
        {
            edx = t4;
            edi = eax;
            eax = t3;
            goto L_101269a3;
        }
        edx = t4;
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            goto L_10126987;
        }
        eax = rd32(sp0 - 4u);
    }
L_101269bf: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t13 = g->edx;
    wr32(sp0 - 4u, t12);
    if (t12 == 0u)
    {
        eax = t12;
        loc_4 = t12;
        goto L_101269e0;
    }
    eax = t12;
    edx = t13;
    loc_4 = t12;
    wr32(sp0 - 0x14u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t14 = cow_stdcall(g, COW_IMG(0x10126460u), 1, eax);
    wr32(self + 0x1cu, t14);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_101269a3: ;
    wr32(sp0 - 0x14u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x10126580u), self, 1, edi);
    t6 = g->edx;
    if (arg1 == 0u)
    {
        eax = t5;
        edx = t6;
    }
    else
    {
        eax = t5;
        edx = t6;
        g->eax = eax;
        g->ecx = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x14u, arg1);
        t10 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, t9, 1, 1, arg1);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    goto L_101269bf;
L_101269e0: ;
    t15 = rd32(self + 0x30u);
    wr32(self + 0x1cu, 0u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(t15) + 0x4cu), t15, 0);
    t16 = rd32(sp0 - 0xcu);
    t17 = rd32(sp0 - 0x10u);
    wr8(COW_IMG(0x10488208u), 0u);
    g->esi = t16;
    g->edi = t17;
    g->ebp = rd32(sp0 - 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10126970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
