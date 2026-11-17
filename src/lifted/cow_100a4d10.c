/* f_0x100a4d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100a4d10(Guest* g)
{
    double d10;
    double d11;
    double d17;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_b4;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 224u);

    wr32(sp0 - 0xb4u, in_esi);
    wr32(sp0 - 0xb8u, sp0 - 0x40u);
    wr32(sp0 - 0xbcu, 0xau);
    g->esp = sp0 - 0xb4u;
    cow_thiscall(g, rd32(rd32(self) + 0x1c4u), self, 2, 0xau, sp0 - 0x40u);
    wr32(sp0 - 0xb8u, sp0 - 0x30u);
    wr32(sp0 - 0xbcu, 0xbu);
    cow_thiscall(g, rd32(rd32(self) + 0x1c4u), self, 2, 0xbu, sp0 - 0x30u);
    wr32(sp0 - 0xb8u, sp0 - 0x20u);
    wr32(sp0 - 0xbcu, 8u);
    cow_thiscall(g, rd32(rd32(self) + 0x1c4u), self, 2, 8u, sp0 - 0x20u);
    wr32(sp0 - 0xb8u, sp0 - 0x10u);
    wr32(sp0 - 0xbcu, 9u);
    cow_thiscall(g, rd32(rd32(self) + 0x1c4u), self, 2, 9u, sp0 - 0x10u);
    wr32(sp0 - 0xb8u, sp0 - 0x30u);
    wr32(sp0 - 0xbcu, sp0 - 0x40u);
    wr32(sp0 - 0xc0u, sp0 - 0x70u);
    cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x70u, sp0 - 0x40u, sp0 - 0x30u);
    wr32(sp0 - 0xc4u, sp0 - 0x10u);
    wr32(sp0 - 0xc8u, sp0 - 0x20u);
    wr32(sp0 - 0xccu, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0xc0u;
    t1 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x50u, sp0 - 0x20u, sp0 - 0x10u);
    t2 = g->edx;
    wr32(sp0 - 0xd0u, 0x3f000000u);
    wr32(sp0 - 0xd4u, sp0 - 0x70u);
    g->ecx = sp0 - 0x70u;
    g->esp = sp0 - 0xccu;
    t3 = cow_cdecl(g, COW_IMG(0x100271f0u), 2, sp0 - 0x70u, 0x3f000000u);
    t4 = g->ecx;
    wr32(sp0 - 0xd8u, 0x3f000000u);
    wr32(sp0 - 0xdcu, sp0 - 0x50u);
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x100271f0u), 2, sp0 - 0x50u, 0x3f000000u);
    t5 = g->edx;
    wr32(sp0 - 0xb8u, 1u);
    wr32(sp0 - 0xbcu, sp0 - 0x90u);
    wr32(sp0 - 0xc0u, sp0 - 0x70u);
    g->eax = sp0 - 0x90u;
    g->esp = sp0 - 0xb4u;
    t6 = cow_thiscall(g, COW_IMG(0x101814d0u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x70u, sp0 - 0x90u, 1u);
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        loc_b4 = in_esi;
    }
    else
    {
        wr32(sp0 - 0xb8u, 1u);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->esp = sp0 - 0xb4u;
        t7 = cow_thiscall(g, COW_IMG(0x101814d0u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x50u, sp0 - 0x80u, 1u);
        if ((uint8_t)t7 == 0u)
        {
            eax = t7;
            loc_b4 = in_esi;
        }
        else
        {
            eax = t7;
            d8 = (double)rdf32(sp0 - 0x90u);
            d9 = (double)rdf32(sp0 - 0x80u);
            if (d8 != d9) goto L_100a4e1b;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, d9, 0u);
            d10 = (double)rdf32(sp0 - 0x88u);
            d11 = (double)rdf32(sp0 - 0x78u);
            if (d10 == d11)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, d11, 0u);
                loc_b4 = rd32(sp0 - 0xb4u);
                goto L_100a4ec2;
            }
L_100a4e1b: ;
            wr32(sp0 - 0xb8u, sp0 - 0x90u);
            wr32(sp0 - 0xbcu, sp0 - 0x80u);
            wr32(sp0 - 0xc0u, sp0 - 0x60u);
            g->esp = sp0 - 0xb4u;
            cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x60u, sp0 - 0x80u, sp0 - 0x90u);
            wr32(sp0 - 0xc4u, sp0 - 0xa0u);
            wr32(sp0 - 0xc8u, sp0 - 0x60u);
            wr32(sp0 - 0xccu, sp0 - 0xa0u);
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0x9cu, 0xbf800000u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x94u, 0x3f800000u);
            g->esp = sp0 - 0xc0u;
            cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xa0u, sp0 - 0x60u, sp0 - 0xa0u);
            wr32(sp0 - 0xd0u, sp0 - 0xa0u);
            wr32(sp0 - 0xd4u, sp0 - 0x60u);
            wr32(sp0 - 0xd8u, sp0 - 0xb0u);
            g->eax = sp0 - 0xb0u;
            g->edx = sp0 - 0x60u;
            g->esp = sp0 - 0xccu;
            t12 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xb0u, sp0 - 0x60u, sp0 - 0xa0u);
            t13 = g->edx;
            wr32(sp0 - 0xdcu, sp0 - 0xb0u);
            g->ecx = sp0 - 0xb0u;
            g->edx = t13;
            g->esp = sp0 - 0xd8u;
            t14 = cow_call_regs(g, COW_IMG(0x100274b0u), t12, g->ecx, g->edx, 1, 1, sp0 - 0xb0u);
            t15 = g->ecx;
            t16 = g->edx;
            d17 = (double)rdf32(sp0 - 0xacu);
            if ((cow_fsw(g, d17, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d17, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
                edx = t16;
            }
            else
            {
                ecx = t15;
                wr32(sp0 - 0xb8u, 0xbf800000u);
                wr32(sp0 - 0xbcu, sp0 - 0xb0u);
                wr32(sp0 - 0xc0u, sp0 - 0xb0u);
                g->eax = sp0 - 0xb0u;
                g->edx = sp0 - 0xb0u;
                g->esp = sp0 - 0xb4u;
                t18 = cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0xb0u, sp0 - 0xb0u, 0xbf800000u);
                t19 = g->edx;
                eax = t18;
                edx = t19;
            }
            wr32(sp0 - 0xa4u, 0x3f800000u);
            wr32(sp0 - 0xb8u, sp0 - 0xb0u);
            g->esp = sp0 - 0xb4u;
            t20 = cow_call_regs(g, COW_IMG(0x100aa820u), eax, self, g->edx, 0, 1, sp0 - 0xb0u);
            eax = t20;
            loc_b4 = rd32(sp0 - 0xb4u);
        }
    }
L_100a4ec2: ;
    g->esi = loc_b4;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a4d10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
