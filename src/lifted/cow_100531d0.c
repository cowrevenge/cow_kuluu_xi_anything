/* f_0x100531d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100531d0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd8(self + 0xdcu) & 1u) goto L_100531eb;
    if ((rd32(self + 0xd8u) >> 8u & 8u) == 0u)
    {
        eax = rd32(self + 0xd8u);
        edx = in_edx;
        goto L_10053259;
    }
L_100531eb: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x100539e0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x10u, ecx);
        wr32(sp0 - 0x10u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x10u, self, g->edx, 0, 1, 0u);
        t5 = g->edx;
        if ((rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u == 0x14u)
        {
            eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
            edx = t5;
        }
        else
        {
            eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
            ecx = rd32(self + 0x34u) & 0xfu;
            edx = t5;
            if ((int32_t)eax < 1) goto L_10053225;
            if ((int32_t)eax < 14) goto L_1005322a;
L_10053225: ;
            if ((int32_t)eax <= 15) goto L_10053247;
L_1005322a: ;
            wr32(sp0 - 0x10u, ecx);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x10u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x30u, 0);
            t7 = g->edx;
            wr32(sp0 - 0x18u, t6);
            g->edx = t7;
            g->esp = sp0 - 0x18u;
            t8 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x30u, 0);
            t9 = g->edx;
            wr32(sp0 - 0x1cu, t8);
            g->ebx = 0u;
            g->esp = sp0 - 0xcu;
            t10 = cow_fastcall(g, COW_IMG(0x10053a00u), self, t9, 4, t8, rd32(sp0 - 0x18u), 0u, 0u);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
L_10053247: ;
    wr32(self + 0x9cu, 0u);
    wr32(self + 0xccu, 0u);
    wr32(self + 0xc8u, 0u);
L_10053259: ;
    if (!(rd8(self + 0xdcu) & 1u)) goto L_10053289;
    if (rd32(self + 0xa8u) != 0u)
    {
        eax = rd32(self + 0xa8u);
        wr32(eax + 0x14u, 0u);
    }
    wr8(self + 0xdcu, rd8(self + 0xdcu) & 0xfeu);
    t12 = (rd32(self + 0xd8u) & 0xffff00ffu) | (uint8_t)(rd32(self + 0xd8u) >> 8u | 8u) << 8u;
    wr32(self + 0xd8u, t12);
    g->ebx = in_ebx;
    g->edx = edx;
    return t12;
L_10053289: ;
    wr8(self + 0xdcu, rd8(self + 0xdcu) & 0xfeu);
    t13 = (rd32(self + 0xd8u) & 0xffff00ffu) | (uint8_t)(rd32(self + 0xd8u) >> 8u | 8u) << 8u;
    wr32(self + 0xd8u, t13);
    if (rd32(self + 0xa8u) == 0u)
    {
        ecx = rd32(self + 0xa8u);
    }
    else
    {
        ecx = rd32(self + 0xa8u);
        wr32(sp0 - 0x10u, 1u);
        g->edx = rd32(ecx);
        t14 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t14 + 0x18u), ecx, 1, 1u);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(self + 0xa8u, 0u);
        ecx = t15;
        edx = t16;
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 0x3du);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x3du, 4u);
    t18 = g->edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_fastcall(g, COW_IMG(0x100748f0u), t17, t18, 0);
    t20 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t17 == 0u)
    {
        edx = t20;
        edi = 0u;
    }
    else
    {
        eax = t19;
        edx = t20;
        edi = t17;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10074740u), eax, edi, g->edx, 1, 0);
        t21 = g->edx;
        wr32(edi, COW_IMG(0x1032b654u));
        wr8(edi + 0x3cu, 0u);
        edx = t21;
    }
    t22 = rd32(self + 0x14u);
    wr32(self + 0xa8u, edi);
    wr32(edi + 0x34u, t22);
    t23 = rd32(self + 0x14u);
    wr32(edi + 0x38u, t23);
    t24 = rd32(self + 0x14u);
    wr32(edi + 0x18u, t24);
    wr32(edi + 0x1cu, 0x4d670000u);
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x10053e60u), t24, self, edx, 1, 0);
    t26 = g->edx;
    if ((rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u == 0x14u)
    {
        eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
        edx = t26;
        goto L_10053343;
    }
    eax = (rd32(self + 0x34u) & 0xfu) + (rd8(self + 0x36u) & 1u) * 0x10u;
    edx = t26;
    if ((int32_t)eax < 1) goto L_10053331;
    if ((int32_t)eax < 14) goto L_10053336;
L_10053331: ;
    if ((int32_t)eax <= 15) goto L_10053343;
L_10053336: ;
    wr32(sp0 - 0x10u, 9u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x100749b0u), edi, 1, 9u);
    t28 = g->edx;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t28;
    return t27;
L_10053343: ;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10074a00u), eax, edi, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100531d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100531d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
