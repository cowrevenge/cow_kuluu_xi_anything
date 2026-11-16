/* f_0x1012e6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012e6d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x18u, self);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u)
    {
        eax = 0u;
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        goto L_1012e850;
    }
    ebp = t1;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = 0u;
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        goto L_1012e850;
    }
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0x2c7d8u);
    ebx = 1u;
    esi = 0x2c7d8u;
    edi = in_edi;
    loc_14 = 0u;
    loc_c = 0u;
    loc_10 = 0x2c7d8u;
L_1012e71e: ;
    if (rd32(esi + rd32(COW_IMG(0x104dfd98u))) - 1u > 0xfu) goto L_1012e7a7;
    eax = rd32(esi + rd32(COW_IMG(0x104dfd98u))) - 1u;
    esi = esi + rd32(COW_IMG(0x104dfd98u));
    t2 = rd32(COW_IMG(0x1012e858u) + rd8(COW_IMG(0x1012e864u) + eax) * 4u);
    switch (t2 - RD)
    {
    case 0x1012e73cu: goto L_1012e73c;
    case 0x1012e743u: goto L_1012e743;
    case 0x1012e7a7u: goto L_1012e7a7;
    default: rt_fatal(g, COW_IMG(0x1012e735u), "switch");
    }
    return 0;
L_1012e73c: ;
    edi = 0x80808080u;
L_1012e748: ;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118900u), ebp, 4, sp0 - 8u, ebx, 1u, 1u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, edi);
    t3 = rd32(esi + 0x28u);
    wr32(sp0 - 0x34u, t3);
    wr32(sp0 - 0x38u, 0x3f800000u);
    t4 = rd32(sp0 - 6u);
    wr32(sp0 - 0x3cu, t4);
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x40u, t5);
    t6 = (t3 & 0xffff0000u) | rd16(esi + 0x20u);
    wr32(sp0 - 0x44u, t6);
    cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t6, t5, t4, 0x3f800000u, t3, edi, 0u);
    if (rd16(esi + 0x20u) == 0xffffu)
    {
        t7 = rd32(esi + 0x28u) + rd32(sp0 - 0x14u);
        wr32(sp0 - 0x14u, t7);
        loc_14 = t7;
    }
    if ((uint32_t)(int16_t)rd16(rd32(rd32(sp0 - 0x18u) + 8u) + 0x4cu) != ebx)
    {
        ebp = rd32(rd32(sp0 - 0x18u) + 8u);
    }
    else
    {
        ebp = rd32(rd32(sp0 - 0x18u) + 8u);
        wr32(sp0 - 0xcu, esi);
        loc_c = esi;
    }
L_1012e7a7: ;
    wr32(sp0 - 0x10u, loc_10 + 0x48u);
    if ((int32_t)ebx < 8)
    {
        ebx = ebx + 1u;
        esi = loc_10 + 0x48u;
        loc_10 = loc_10 + 0x48u;
        goto L_1012e71e;
    }
    ebx = ebx + 1u;
    t8 = rd32(self + 8u);
    wr32(sp0 - 0x2cu, t8);
    g->eax = t8;
    g->edx = self;
    g->esp = sp0 - 0x28u;
    t9 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t8);
    t10 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        edx = t10;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        if (rd32(sp0 - 0xcu) == 0u)
        {
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            g->edi = edi;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1013e200u), rd32(COW_IMG(0x10578204u)), 4, 0u, 0u, 0u, 0u);
        }
        else
        {
            esi = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x34u, esi + 0x2cu);
            t11 = (edx & 0xffff0000u) | rd16(esi + 0x20u);
            wr32(sp0 - 0x38u, t11);
            g->edi = edi;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1013e200u), rd32(COW_IMG(0x10578204u)), 4, t11, esi + 0x2cu, 0u, 0u);
            if (rd16(esi + 0x20u) == 0xffffu)
            {
                t12 = rd32(esi + 0x28u);
                wr32(rd32(COW_IMG(0x10578204u)) + 0x20u, t12);
            }
        }
    }
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0xbu);
    wr32(sp0 - 0x38u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(rd32(sp0 - 0x18u) + 8u), 4, sp0 - 8u, 0xbu, 1u, 1u);
    wr32(sp0 - 0x2cu, 1u);
    t13 = rd32(sp0 - 6u);
    wr32(sp0 - 0x30u, t13);
    t14 = rd32(sp0 - 4u) + 0xau;
    wr32(sp0 - 0x34u, t14);
    t15 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x38u, t15);
    g->eax = t15;
    g->edx = t14;
    t16 = cow_cdecl(g, COW_IMG(0x10140910u), 4, t15, t14, t13, 1u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    ebx = rd32(sp0 - 0x20u);
    esi = rd32(sp0 - 0x24u);
    edi = rd32(sp0 - 0x28u);
L_1012e850: ;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_1012e743: ;
    edi = 0x80404040u;
    goto L_1012e748;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012e6d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
