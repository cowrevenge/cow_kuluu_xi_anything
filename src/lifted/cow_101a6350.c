/* f_0x101a6350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a6350(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
        goto L_101a6383;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax == 1u) goto L_101a6365;
    eax = eax - 1u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        edx = in_edx;
        goto L_101a637f;
    }
L_101a6365: ;
    t1 = rd32(rd32(COW_IMG(0x106627b4u)) + 8u);
    g->eax = rd32(COW_IMG(0x106627b4u));
    t2 = rd32(COW_IMG(0x106627b4u));
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10037e90u), t4, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_101a637f: ;
    g->edx = edx;
    return eax;
L_101a6383: ;
    if (rd32(rd32(self + 0x54u)) == 0u)
    {
        edx = rd32(self + 0x54u);
        goto L_101a637f;
    }
    ecx = rd32(rd32(self + 0x54u));
    edx = rd32(self + 0x54u);
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t10 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, ecx, g->edx, 0, 1, 0u);
        t11 = g->edx;
        if (t10 == 0u)
        {
            edx = t11;
        }
        else
        {
            edx = t11;
            g->edx = edx;
            t12 = rd32(self + 0x54u);
            t13 = rd32(rd32(self + 0x54u));
            g->esp = sp0 - 8u;
            t14 = cow_call_regs(g, COW_IMG(0x101c5e50u), t12, t13, g->edx, 0, 1, 0u);
            t15 = g->ecx;
            t16 = g->edx;
            edi = t14;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (~ecx == 1u)
            {
                edx = t16;
            }
            else
            {
                edx = t16;
                t17 = rd32(rd32(self + 0x54u));
                g->esp = sp0 - 8u;
                t18 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t17, g->edx, 0, 1, eax);
                t19 = g->ecx;
                g->edx = self + 0x14u;
                g->esp = sp0 - 4u;
                t20 = cow_call_regs(g, COW_IMG(0x10312090u), t18, g->ecx, g->edx, 1, 3, self + 0x14u, t18, 0x3du);
                t21 = g->edx;
                if (rd8(self + 0x51u) != 0u)
                {
                    edx = t21;
                }
                else
                {
                    eax = (t20 & 0xffffff00u) | rd8(self + 0x51u);
                    edx = t21;
                    t22 = rd32(self + 8u);
                    wr8(self + 0x51u, 1u);
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    cow_thiscall(g, COW_IMG(0x10118b60u), t22, 2, 0xbu, 2u);
                    t23 = g->edx;
                    edx = t23;
                }
            }
        }
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            if (rd8(self + 0x51u) != 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x101c5f30u), ecx, 1, self + 0x14u);
                t9 = g->edx;
                edx = t9;
            }
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                g->edx = edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x101c5f30u), ecx, 1, 0u);
                t8 = g->edx;
                edx = t8;
            }
        }
    }
    t24 = rd32(COW_IMG(0x106627b4u));
    wr32(sp0 + 8u, 0u);
    t25 = rd32(t24 + 8u);
    wr32(sp0 + 4u, t25);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t24, COW_IMG(0x10621838u), edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6350(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
