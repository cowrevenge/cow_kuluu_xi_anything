/* f_0x10208f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10208f00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x101f7100u), arg1, 0);
        t2 = g->ecx;
        if (rd32(arg1 + 0x38u) == 0u)
        {
            ecx = t2;
            edx = rd32(arg1 + 0x38u);
            goto L_10208f45;
        }
        eax = t1;
        edx = rd32(arg1 + 0x38u);
        if ((int32_t)eax >= (int16_t)rd16(arg1 + 0x20u))
        {
            ecx = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
            goto L_10208f45;
        }
        if (eax * 0x54u + edx == 0u)
        {
            ecx = eax * 8u - eax;
            goto L_10208f45;
        }
        ecx = eax * 8u - eax;
        eax = eax * 0x54u + edx;
        eax = rd32(eax + 0x48u);
L_10208f47: ;
        if (rd8(self + 0x20u) != 0u) goto L_10208f7f;
        if ((int32_t)eax <= 8192) goto L_10208f7f;
        wr32(sp0 - 0x14u, eax);
        wr16(rd32(COW_IMG(0x106636a0u)) + 0x2au, 0xcu);
        t3 = rd32(COW_IMG(0x106636a0u));
        wr32(t3 + 0x30u, COW_IMG(0x10208d90u));
        wr32(t3 + 0x38u, eax);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x101ec2f0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, eax);
L_10208f8a: ;
        if (rd32(rd32(COW_IMG(0x1066442cu)) + 8u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1066442cu)) + 8u);
            edx = rd32(COW_IMG(0x1066442cu));
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1066442cu)) + 8u);
            edx = rd32(COW_IMG(0x1066442cu));
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t4 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t5 = g->edx;
            if ((uint8_t)t4 == 0u)
            {
                eax = t4;
                edx = t5;
            }
            else
            {
                edx = t5;
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t6 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t6);
                    t7 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t7);
                    edx = t7;
                }
                wr32(sp0 - 0x14u, sp0 - 8u);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t8 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(COW_IMG(0x1066442cu)) + 8u), 1, sp0 - 8u);
                t9 = g->edx;
                if ((uint8_t)t8 == 0u)
                {
                    eax = t8;
                    edx = t9;
                }
                else
                {
                    eax = t8;
                    wr32(sp0 - 0x14u, 0u);
                    wr32(sp0 - 0x18u, 8u);
                    wr32(sp0 - 0x1cu, arg1);
                    g->eax = eax;
                    g->edx = rd32(self);
                    t10 = rd32(self);
                    g->esp = sp0 - 0x10u;
                    t11 = cow_thiscall(g, rd32(t10 + 0x28u), self, 3, arg1, 8u, 0u);
                    t12 = g->edx;
                    eax = t11;
                    edx = t12;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
L_10208f45: ;
    eax = 0u;
    goto L_10208f47;
L_10208f7f: ;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 1, 0);
    goto L_10208f8a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10208f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10208f00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
