/* f_0x10235310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10235310(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
    t2 = cow_divs(g, t1, 0x3d5u);
    t3 = cow_mods(g, t1, 0x3d5u);
    eax = 0u;
    ecx = 0u;
    edx = t3;
L_10235323: ;
    if ((int32_t)(ecx + rd32(COW_IMG(0x103873f8u) + eax * 4u)) > (int32_t)edx) goto L_10235334;
    ecx = ecx + rd32(COW_IMG(0x103873f8u) + eax * 4u);
    if ((int32_t)(eax + 1u) < 11)
    {
        eax = eax + 1u;
        goto L_10235323;
    }
    eax = eax + 1u;
L_10235334: ;
    if ((int32_t)(0xau - eax) >= 0)
    {
        esi = 0xau - eax;
    }
    else
    {
        esi = 0u;
    }
    t4 = rd32(sp0 + 4u);
    g->eax = eax;
    g->edx = edx << 4u;
    t5 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x101c4820u), t5, 6, 0x7c07u, edx << 4u, 0x10u, t4, COW_IMG(0x102374a0u), COW_IMG(0x10237470u));
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        edi = t4;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        edi = t4;
        wr8(edi, 0u);
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t9 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
    t10 = cow_divs(g, t9, (1u << (esi + 1u & 0x1fu)) - 1u);
    t11 = cow_mods(g, t9, (1u << (esi + 1u & 0x1fu)) - 1u);
    wr32(sp0 + 4u, t11);
    if (t11 != 0u)
    {
        eax = t10;
        ecx = esi + 1u;
        edx = t11;
        goto L_1023538d;
    }
    eax = t10;
    ecx = esi + 1u;
    edx = t11;
    esi = 1u;
L_102353ab: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t16 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, edx, 0);
    t17 = cow_divs(g, t16, rd32(COW_IMG(0x10387424u) + esi * 4u));
    t18 = cow_mods(g, t16, rd32(COW_IMG(0x10387424u) + esi * 4u));
    t19 = t18 * 0x10u + rd32(COW_IMG(0x10387450u) + esi * 4u) * 0x10u;
    g->eax = rd32(COW_IMG(0x10387450u) + esi * 4u);
    t20 = rd32(COW_IMG(0x10387450u) + esi * 4u);
    t21 = cow_thiscall(g, COW_IMG(0x101c4820u), rd32(COW_IMG(0x10662dccu)), 6, 0x7c06u, t19, 0x10u, edi, COW_IMG(0x102374f0u), COW_IMG(0x102374c0u));
    if ((int32_t)t21 >= 0) goto L_102353ff;
    wr8(edi, 0u);
    return;
L_1023538d: ;
    g->ecx = ecx;
    g->edx = edx;
    d12 = fr(g, fr(g, 0.69314718055994531 * log2((double)(int32_t)rd32(sp0 + 4u))) * rdf64(COW_IMG(0x1033c810u)));
    fpush(g, d12);
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 < 0)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        esi = t13;
        goto L_102353ec;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    esi = t13;
    if ((int32_t)esi >= 11) goto L_102353ec;
    goto L_102353ab;
L_102353ec: ;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10235410u), ecx, 0);
    wr8(edi, 0u);
L_102353ff: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10235310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10235310(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
