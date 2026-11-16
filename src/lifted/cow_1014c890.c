/* f_0x1014c890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014c890(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0xcu, self);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1014c9f4;
    }
    ecx = t1;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1014c9f4;
    }
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x10u, 0u);
    edx = in_edx;
    ebx = 0u;
    ebp = 0u;
    edi = 1u;
    loc_10 = 0u;
L_1014c8d3: ;
    if (rd32(ebp + rd32(COW_IMG(0x104dfd98u)) + 0x2ca24u) - 6u > 8u) goto L_1014c95c;
    eax = rd32(ebp + rd32(COW_IMG(0x104dfd98u)) + 0x2ca24u) - 6u;
    esi = ebp + rd32(COW_IMG(0x104dfd98u)) + 0x2ca24u;
    t2 = rd32(COW_IMG(0x1014c9fcu) + rd8(COW_IMG(0x1014ca04u) + eax) * 4u);
    edx = rd8(COW_IMG(0x1014ca04u) + eax);
    switch (t2 - RD)
    {
    case 0x1014c8fdu: goto L_1014c8fd;
    case 0x1014c95cu: goto L_1014c95c;
    default: rt_fatal(g, COW_IMG(0x1014c8f6u), "switch");
    }
    return 0;
L_1014c8fd: ;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10118900u), ecx, 4, sp0 - 8u, edi, 1u, 1u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x60808080u);
    t3 = rd32(esi + 0x28u);
    wr32(sp0 - 0x2cu, t3);
    wr32(sp0 - 0x30u, 0x3f800000u);
    t4 = rd32(sp0 - 6u);
    wr32(sp0 - 0x34u, t4);
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x38u, t5);
    t6 = (t3 & 0xffff0000u) | rd16(esi + 0x20u);
    wr32(sp0 - 0x3cu, t6);
    cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t6, t5, t4, 0x3f800000u, t3, 0x60808080u, 0u);
    if (rd16(esi + 0x20u) == 0xffffu)
    {
        t7 = rd32(esi + 0x28u) + rd32(sp0 - 0x10u);
        wr32(sp0 - 0x10u, t7);
        loc_10 = t7;
    }
    if ((uint32_t)(int16_t)rd16(rd32(rd32(sp0 - 0xcu) + 8u) + 0x4cu) != edi)
    {
        ecx = rd32(rd32(sp0 - 0xcu) + 8u);
        edx = (uint32_t)(int16_t)rd16(rd32(rd32(sp0 - 0xcu) + 8u) + 0x4cu);
    }
    else
    {
        ecx = rd32(rd32(sp0 - 0xcu) + 8u);
        edx = (uint32_t)(int16_t)rd16(rd32(rd32(sp0 - 0xcu) + 8u) + 0x4cu);
        ebx = esi;
    }
L_1014c95c: ;
    if ((int32_t)edi < 8)
    {
        ebp = ebp + 0x48u;
        edi = edi + 1u;
        goto L_1014c8d3;
    }
    eax = edi;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    if (ebx == 0u)
    {
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        g->edi = in_edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_thiscall(g, COW_IMG(0x1013e200u), rd32(COW_IMG(0x10578204u)), 4, 0u, 0u, 0u, 0u);
        t13 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        eax = t12;
        edx = t13;
        loc_18 = 0u;
    }
    else
    {
        wr32(sp0 - 0x20u, ebx + 0x2cu);
        t8 = (edx & 0xffff0000u) | rd16(ebx + 0x20u);
        wr32(sp0 - 0x24u, t8);
        g->edi = in_edi;
        g->eax = eax;
        g->edx = t8;
        g->esp = sp0 - 0x14u;
        t9 = cow_thiscall(g, COW_IMG(0x1013e200u), rd32(COW_IMG(0x10578204u)), 4, t8, ebx + 0x2cu, 0u, 0u);
        t10 = g->edx;
        if (rd16(ebx + 0x20u) != 0xffffu)
        {
            eax = t9;
            edx = t10;
        }
        else
        {
            edx = t10;
            t11 = rd32(ebx + 0x28u);
            wr32(rd32(COW_IMG(0x10578204u)) + 0x20u, t11);
            eax = t11;
        }
        wr32(sp0 - 0x18u, ebx + 4u);
        loc_18 = ebx + 4u;
        ebx = ebx + 4u;
    }
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1014dc80u), rd32(COW_IMG(0x10578458u)), 1, loc_18);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 9u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = in_edi;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(rd32(sp0 - 0xcu) + 8u), 4, sp0 - 8u, 9u, 1u, 1u);
    wr32(sp0 - 0x18u, 1u);
    t14 = rd32(sp0 - 6u);
    wr32(sp0 - 0x1cu, t14);
    t15 = rd32(sp0 - 4u) + 0xau;
    wr32(sp0 - 0x20u, t15);
    t16 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x24u, t16);
    g->ebx = ebx;
    g->eax = t16;
    g->edx = t15;
    t17 = cow_cdecl(g, COW_IMG(0x10140910u), 4, t16, t15, t14, 1u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_1014c9f4: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c890(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
