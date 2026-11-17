/* f_0x101a0f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a0f60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_128;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_138;
    uint32_t loc_13c;
    uint32_t loc_140;
    uint32_t loc_244;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 604u);

    wr32(sp0 - 0x24cu, in_ebx);
    wr32(sp0 - 0x250u, in_esi);
    wr32(sp0 - 0x254u, in_edi);
    wr32(sp0 - 0x248u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x244u, 0u);
    edi = sp0 - 0x240u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x258u, 0xffffffffu);
    wr32(sp0 - 0x140u, 0u);
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x134u, 0u);
    wr32(sp0 - 0x130u, 0u);
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x128u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t1 = cow_fastcall(g, COW_IMG(0x101b9550u), rd32(self + 0x1cu), in_edx, 1, 0xffffffffu);
    t2 = g->edx;
    if ((int32_t)rd32(self + 0xcu) <= 0)
    {
        eax = t1;
        edx = t2;
        loc_244 = 0u;
        loc_140 = 0u;
        loc_13c = 0u;
        loc_138 = 0u;
        loc_134 = 0u;
        loc_130 = 0u;
        loc_12c = 0u;
        loc_128 = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        if (rd8(self + 0x18u) != 0u)
        {
            loc_244 = 0u;
            loc_140 = 0u;
            loc_13c = 0u;
            loc_138 = 0u;
            loc_134 = 0u;
            loc_130 = 0u;
            loc_12c = 0u;
            loc_128 = 0u;
        }
        else
        {
            t3 = rd32(self + 0x10u);
            wr8(self + 0x18u, 1u);
            t4 = rd32(t3 * 0x124u + rd32(self + 4u) + 4u);
            wr32(sp0 - 0x244u, t4);
            eax = t3 * 0x124u + rd32(self + 4u);
            ecx = t3 * 0x124u + rd32(self + 4u) + 8u;
            edx = t3 * 0x49u;
            edi = sp0 - 0x240u - (t3 * 0x124u + rd32(self + 4u) + 8u);
            loc_244 = t4;
L_101a0ff7: ;
            t5 = rd8(ecx);
            wr8(ecx + edi, (uint8_t)t5);
            if ((uint8_t)t5 != 0u)
            {
                ecx = ecx + 1u;
                edx = (edx & 0xffffff00u) | t5;
                goto L_101a0ff7;
            }
            pf = PARITY((uint8_t)t5);
            zf = (uint8_t)t5 == 0u;
            sf = (int8_t)t5 < 0;
            t6 = rd32(eax + 0x108u);
            wr32(sp0 - 0x140u, t6);
            t7 = rd32(eax + 0x10cu);
            wr32(sp0 - 0x13cu, t7);
            t8 = rd32(eax + 0x110u);
            wr32(sp0 - 0x138u, t8);
            t9 = rd32(eax + 0x114u);
            wr32(sp0 - 0x134u, t9);
            t10 = rd32(eax + 0x118u);
            wr32(sp0 - 0x130u, t10);
            t11 = rd32(eax + 0x11cu);
            wr32(sp0 - 0x12cu, t11);
            wr32(sp0 - 0x258u, sp0 - 0x248u);
            t12 = rd32(eax + 0x120u);
            wr32(sp0 - 0x128u, t12);
            g->cf = 0u;
            g->pf = pf;
            g->af = 0u;
            g->zf = zf;
            g->sf = sf;
            g->of = 0u;
            g->eax = sp0 - 0x248u;
            g->edx = t12;
            g->esp = sp0 - 0x254u;
            t13 = cow_thiscall(g, COW_IMG(0x101a1100u), sp0 - 0x124u, 1, sp0 - 0x248u);
            t14 = g->edx;
            eax = t13;
            edx = t14;
            loc_244 = rd32(sp0 - 0x244u);
            loc_140 = rd32(sp0 - 0x140u);
            loc_13c = rd32(sp0 - 0x13cu);
            loc_138 = rd32(sp0 - 0x138u);
            loc_134 = rd32(sp0 - 0x134u);
            loc_130 = rd32(sp0 - 0x130u);
            loc_12c = rd32(sp0 - 0x12cu);
            loc_128 = rd32(sp0 - 0x128u);
        }
    }
    g->esp = sp0 - 0x254u;
    cow_fastcall(g, COW_IMG(0x101b9530u), rd32(self + 0x1cu), edx, 0);
    t15 = rd32(sp0 - 0x244u);
    t16 = rd32(sp0 - 0x140u);
    wr32(arg1 + 4u, t15);
    wr32(arg1 + 0x108u, t16);
    t17 = rd32(sp0 - 0x138u);
    wr32(arg1, COW_IMG(0x10337200u));
    esi = sp0 - 0x240u;
    edi = arg1 + 8u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t18 = rd32(sp0 - 0x13cu);
    wr32(arg1 + 0x110u, t17);
    t19 = rd32(sp0 - 0x130u);
    wr32(arg1 + 0x10cu, t18);
    t20 = rd32(sp0 - 0x134u);
    wr32(arg1 + 0x118u, t19);
    t21 = rd32(sp0 - 0x128u);
    wr32(arg1 + 0x114u, t20);
    t22 = rd32(sp0 - 0x12cu);
    wr32(arg1 + 0x11cu, t22);
    wr32(arg1 + 0x120u, t21);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a0f60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
