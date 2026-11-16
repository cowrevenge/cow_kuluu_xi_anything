/* f_0x101481d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101481d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if (rd8(self + 0x14u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x14u);
        goto L_1014829e;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x14u);
    if ((int16_t)rd16(sp0 + 8u) <= 8)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) * 2u - 1u;
        ebx = (uint32_t)(int16_t)rd16(sp0 + 8u);
    }
    else
    {
        ebx = (uint32_t)(int16_t)rd16(sp0 + 8u);
        eax = ebx * 2u - 0x10u;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10148190u), self, 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)rd32(self + 0x1cu) <= 0)
    {
        ecx = t2;
        edx = t3;
        edi = t1;
        goto L_10148232;
    }
    edx = t3;
    edi = t1;
    pf = PARITY((uint8_t)rd32(self + 0x1cu));
    zf = rd32(self + 0x1cu) == 0u;
    sf = (int32_t)rd32(self + 0x1cu) < 0;
    if ((rd32(self + 0x80u) & 1u << (edi & 0x1fu)) != 0u)
    {
        ecx = edi;
        goto L_10148232;
    }
    eax = 1u << (edi & 0x1fu);
    ecx = edi;
    t4 = (ecx & 0xffff0000u) | rd16(self + 0x1cu);
    t5 = rd32(self + 8u);
    g->ebx = t5;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t5, g->edx, 0, 2, t4, 0u);
    t7 = g->edx;
    g->edi = edi;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x101186a0u), t5, 0);
    t8 = g->ecx;
    t9 = g->edx;
    ecx = t8;
    edx = t9;
L_10148235: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u)
    {
        cf = (uint32_t)(int16_t)rd16(sp0 + 4u) < 5u;
        pf = PARITY((uint8_t)((uint32_t)(int16_t)rd16(sp0 + 4u) - 5u));
        zf = (uint32_t)(int16_t)rd16(sp0 + 4u) == 5u;
        sf = (int32_t)((uint32_t)(int16_t)rd16(sp0 + 4u) - 5u) < 0;
        of = (((uint32_t)(int16_t)rd16(sp0 + 4u) ^ 5u) & ((uint32_t)(int16_t)rd16(sp0 + 4u) ^ (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u)) >> 0x1fu;
        goto L_1014824d;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
    }
    else
    {
        eax = eax - 1u;
        g->ebx = in_ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_stdcall(g, COW_IMG(0x1024ce30u), 0);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
L_10148248: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10148232: ;
    wr32(self + 0x1cu, ebx);
    goto L_10148235;
L_1014824d: ;
    if ((rd32(self + 0x80u) & 1u << (edi & 0x1fu)) == 0u)
    {
        eax = rd32(self + 0x80u);
        ecx = edi;
        edx = 1u << (edi & 0x1fu);
        goto L_10148294;
    }
    ecx = edi;
    edx = 1u << (edi & 0x1fu);
    if (edi == (uint32_t)(int8_t)rd8(self + 0x15u))
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x15u);
        goto L_10148294;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x15u);
    if (edi == (uint32_t)(int8_t)rd8(self + 0x16u))
    {
        ecx = (uint32_t)(int8_t)rd8(self + 0x16u);
        goto L_10148294;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1024c910u), rd32(COW_IMG(0x10669140u)), 1, edi);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103715f8u), 1u, 0u);
    t14 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t14;
    return t13;
L_10148294: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t16 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t16;
    return t15;
L_1014829e: ;
    if (rd16(sp0 + 4u) != 5u)
    {
        edx = in_edx;
        goto L_10148248;
    }
    if (rd32(COW_IMG(0x105782bcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x105782bcu));
        edx = in_edx;
        goto L_10148248;
    }
    eax = rd32(COW_IMG(0x105782bcu));
    t17 = rd32(eax + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, t17);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t17;
    return cow_tailcall(g, COW_IMG(0x1015db80u), eax, COW_IMG(0x10621838u), t17);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101481d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101481d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
