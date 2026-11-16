/* f_0x102323d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102323d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2b0;
    uint32_t loc_2c0;
    uint32_t loc_2c4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 732u);

    wr32(sp0 - 0x2b4u, in_ebx);
    wr32(sp0 - 0x2b8u, in_esi);
    wr32(sp0 - 0x2bcu, in_edi);
    edi = sp0 - 0x27fu;
    eax = 0u;
    ecx = 0x9fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    t1 = (edi & 0xffff0000u) | rd16(self + 0x8cu);
    wr32(sp0 - 0x2c0u, (uint16_t)t1);
    g->esp = sp0 - 0x2bcu;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)t1);
    if (t2 != 0u)
    {
        esi = t2;
        edi = t1;
        wr32(sp0 - 0x2c0u, 0u);
        wr32(sp0 - 0x2c4u, 0x10u);
        wr32(sp0 - 0x2c8u, 0x32u);
        wr32(sp0 - 0x2ccu, 0x28u);
        wr32(sp0 - 0x2d0u, 0x14u);
        wr32(sp0 - 0x2d4u, 0x20u);
        t3 = rd32(self + 8u) + 0xc4u;
        wr32(sp0 - 0x2d8u, t3);
        g->edx = t3;
        g->esp = sp0 - 0x2bcu;
        cow_thiscall(g, COW_IMG(0x10233130u), sp0 - 0x2a8u, 7, t3, 0x20u, 0x14u, 0x28u, 0x32u, 0x10u, 0u);
        t4 = g->edx;
        t5 = rd32(esi + 0x14c8u);
        wr32(sp0 - 0x2b0u, t5);
        if (rd32(esi + 0xcu) == 0u)
        {
            ecx = rd32(esi + 8u);
            loc_2b0 = t5;
            goto L_1023246a;
        }
        eax = rd32(esi + 0xcu);
        ecx = rd32(esi + 8u);
        edx = t4;
        loc_2b0 = t5;
        if (rd8(eax) == 0u) goto L_1023246a;
        if (rd8(self + 0x90u) == 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x90u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x90u);
            ecx = eax;
        }
        wr32(sp0 - 0x2c0u, ecx);
        wr32(sp0 - 0x2c4u, COW_IMG(0x10386a1cu));
        wr32(sp0 - 0x2c8u, sp0 - 0x280u);
        loc_2c0 = ecx;
        ecx = sp0 - 0x280u;
        loc_2c4 = COW_IMG(0x10386a1cu);
L_10232475: ;
        g->ebx = self;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2b4u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x280u, loc_2c4, loc_2c0, rd32(sp0 - 0x2bcu), rd32(sp0 - 0x2b8u));
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x2c0u, 0u);
        wr32(sp0 - 0x2c4u, esi);
        wr32(sp0 - 0x2c8u, edi);
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 0x2a4u;
        t8 = cow_cdecl(g, COW_IMG(0x10231140u), 9, edi, esi, 0u, rd32(sp0 - 0x2bcu), rd32(sp0 - 0x2b8u), rd32(sp0 - 0x2b4u), rd32(sp0 - 0x2b0u), rd32(sp0 - 0x2acu), rd32(sp0 - 0x2a8u));
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x2ccu, edi);
        wr32(sp0 - 0x294u, t8);
        wr32(sp0 - 0x2acu, 1u);
        g->ecx = t9;
        g->esp = sp0 - 0x2c8u;
        t11 = cow_call_regs(g, COW_IMG(0x102308e0u), g->eax, g->ecx, t10, 1, 1, edi);
        t12 = g->ecx;
        t13 = g->edx;
        if ((uint8_t)t11 != 0u)
        {
            edx = t13;
            goto L_102324ac;
        }
        eax = t11;
        ecx = t12;
        edx = t13;
        wr32(sp0 - 0x2c0u, edi);
        g->edx = edx;
        g->esp = sp0 - 0x2bcu;
        t14 = cow_call_regs(g, COW_IMG(0x10230930u), eax, g->ecx, g->edx, 1, 1, edi);
        t15 = g->edx;
        if ((uint8_t)t14 == 0u)
        {
            edx = t15;
            goto L_102324b0;
        }
        edx = t15;
L_102324ac: ;
        eax = 0u;
L_102324b4: ;
        wr32(sp0 - 0x2c0u, eax);
        wr32(sp0 - 0x2c4u, sp0 - 0x280u);
        t16 = rd32(sp0 - 0x2b0u);
        wr32(sp0 - 0x2c8u, t16);
        g->eax = sp0 - 0x280u;
        g->edx = edx;
        g->esp = sp0 - 0x2bcu;
        t17 = cow_thiscall(g, COW_IMG(0x10233190u), sp0 - 0x2a8u, 3, t16, sp0 - 0x280u, eax);
        t18 = g->edx;
        wr32(sp0 - 0x2c0u, esi);
        wr32(sp0 - 0x2c4u, edi);
        t19 = cow_fastcall(g, COW_IMG(0x10232090u), self, t18, 2, edi, esi);
        t20 = g->edx;
        cow_fastcall(g, COW_IMG(0x10233120u), sp0 - 0x2a8u, t20, 0);
    }
    g->ebx = in_ebx;
    return;
L_1023246a: ;
    wr32(sp0 - 0x2c0u, ecx);
    wr32(sp0 - 0x2c4u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x2c8u, sp0 - 0x280u);
    edx = sp0 - 0x280u;
    loc_2c0 = ecx;
    loc_2c4 = COW_IMG(0x1034f7e0u);
    goto L_10232475;
L_102324b0: ;
    eax = rd32(sp0 - 0x2acu);
    goto L_102324b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102323d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102323d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
