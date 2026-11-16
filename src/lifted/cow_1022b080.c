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

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x14u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x10667a68u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        esi = t1;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t4 = g->ecx;
        t5 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c4c8u));
        wr32(COW_IMG(0x10667a68u), esi);
        ecx = t4;
        edx = t5;
    }
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        wr32(COW_IMG(0x10667a6cu), 0u);
    }
    else
    {
        eax = t6;
        edx = t8;
        esi = t6;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c4c8u));
        wr32(COW_IMG(0x10667a6cu), esi);
        ecx = t9;
        edx = t10;
    }
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xc4u, in_edi, in_esi);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0u)
    {
        ecx = t12;
        edx = t13;
        wr32(COW_IMG(0x10667a70u), 0u);
    }
    else
    {
        eax = t11;
        edx = t13;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t14 = cow_thiscall(g, COW_IMG(0x1022c350u), eax, 0);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(COW_IMG(0x10667a70u), t14);
        ecx = t15;
        edx = t16;
    }
    g->esp = sp0;
    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x884u, in_edi, in_esi);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        ecx = t18;
        edx = t19;
        wr32(COW_IMG(0x10667a7cu), 0u);
    }
    else
    {
        eax = t17;
        edx = t19;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t20 = cow_thiscall(g, COW_IMG(0x1022bfb0u), eax, 0);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(COW_IMG(0x10667a7cu), t20);
        ecx = t21;
        edx = t22;
    }
    g->esp = sp0;
    t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, in_edi, in_esi);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_1022b161;
    }
    eax = t23;
    edx = t25;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x1022bd50u), eax, 0);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(COW_IMG(0x10667a80u), t26);
    g->esp = sp0;
    g->edx = t28;
    return cow_tailcall(g, COW_IMG(0x1022b260u), t26, t27, t28);
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
