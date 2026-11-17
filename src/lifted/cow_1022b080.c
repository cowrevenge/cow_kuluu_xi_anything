/* f_0x1022b080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022b080(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x14u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x10667a68u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        esi = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c4c8u));
        wr32(COW_IMG(0x10667a68u), esi);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    g->eax = eax;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        wr32(COW_IMG(0x10667a6cu), 0u);
    }
    else
    {
        eax = t7;
        edx = t9;
        esi = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t11 = g->ecx;
        t12 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c4c8u));
        wr32(COW_IMG(0x10667a6cu), esi);
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    g->eax = eax;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xc4u, in_edi, in_esi);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        wr32(COW_IMG(0x10667a70u), 0u);
    }
    else
    {
        eax = t13;
        edx = t15;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t16 = cow_thiscall(g, COW_IMG(0x1022c350u), eax, 0);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(COW_IMG(0x10667a70u), t16);
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    g->eax = eax;
    g->esp = sp0;
    t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x884u, in_edi, in_esi);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        wr32(COW_IMG(0x10667a7cu), 0u);
    }
    else
    {
        eax = t19;
        edx = t21;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t22 = cow_thiscall(g, COW_IMG(0x1022bfb0u), eax, 0);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(COW_IMG(0x10667a7cu), t22);
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    g->eax = eax;
    g->esp = sp0;
    t25 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, in_edi, in_esi);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 == 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        goto L_1022b161;
    }
    eax = t25;
    edx = t27;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_thiscall(g, COW_IMG(0x1022bd50u), eax, 0);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(COW_IMG(0x10667a80u), t28);
    g->esp = sp0;
    g->edx = t30;
    return cow_tailcall(g, COW_IMG(0x1022b260u), t28, t29, t30);
L_1022b161: ;
    wr32(COW_IMG(0x10667a80u), 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1022b260u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b080(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
