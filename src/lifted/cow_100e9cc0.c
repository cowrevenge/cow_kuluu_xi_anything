/* f_0x100e9cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e9cc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(rd32(sp0 + 0xcu) + 4u);
    if (rd32(rd32(sp0 + 0xcu) + 4u) == 0u)
    {
        eax = t1;
        edx = in_edx;
        loc_4 = t1;
        goto L_100e9d3e;
    }
    edi = rd32(sp0 + 0xcu);
    loc_4 = t1;
    t2 = rd8(edi + 0x18u);
    t3 = rd32(COW_IMG(0x104dfd98u));
    wr8(sp0 + 0xcu, 0u);
    edx = (in_edx & 0xffffff00u) | t2;
    esi = t3;
L_100e9ce2: ;
    if ((uint8_t)edx != 5u)
    {
        eax = (uint8_t)edx;
    }
    else
    {
        eax = 0u;
    }
    t4 = rd32(sp0 + 0xcu);
    if (rd32(esi + (uint8_t)eax * 0x8c4u + (uint8_t)t4 * 0x70u + 0x57ecu) == loc_4)
    {
        ecx = t4;
        goto L_100e9d46;
    }
    eax = esi + (uint8_t)t4 * 0x70u;
    ecx = t4;
    wr8(sp0 + 0xcu, (uint8_t)((uint8_t)ecx + 1u));
    if ((uint8_t)((uint8_t)ecx + 1u) < 0x14u) goto L_100e9ce2;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
L_100e9d3e: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e9d46: ;
    if ((uint8_t)edx != 5u)
    {
        edx = (uint8_t)edx;
    }
    else
    {
        edx = 0u;
    }
    wr16(esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x57f0u, rd16(edi + 0x14u));
    t5 = rd32(edi + 8u);
    wr32(esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x57f8u, t5);
    wr8(esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x5804u, rd8(edi + 0x16u));
    t6 = rd32(edi + 0xcu);
    wr32(esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x57fcu, t6);
    t7 = rd8(edi + 0x17u);
    wr8(esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x5805u, (uint8_t)t7);
    t8 = rd32(edi + 0x10u);
    wr32(esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x5800u, t8);
    g->eax = t6;
    g->ecx = (t5 & 0xffffff00u) | t7;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x57f4u, t9);
    if (rd8(edi + 0x19u) == 0u)
    {
        esi = esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x57d8u;
        ecx = t10;
        edx = t11;
        eax = 0u;
    }
    else
    {
        esi = esi + (uint8_t)ecx * 0x70u + (uint8_t)edx * 0x8c4u + 0x57d8u;
        ecx = t10;
        edx = t11;
        eax = rd16(edi + 0x1au);
    }
    wr16(esi + 0x1au, (uint16_t)eax);
    t12 = rd16(edi + 0x1cu);
    wr16(esi + 0x4cu, (uint16_t)t12);
    t13 = rd8(edi + 0x1eu);
    wr8(esi + 0x4eu, (uint8_t)t13);
    t14 = rd8(edi + 0x1fu);
    wr8(esi + 0x4fu, (uint8_t)t14);
    wr8(esi + 0x50u, 0u);
    t15 = rd8(edi + 0x20u);
    wr8(esi + 0x69u, (uint8_t)t15);
    t16 = rd8(edi + 0x21u);
    wr8(esi + 0x6au, (uint8_t)t16);
    t17 = rd8(edi + 0x22u);
    wr8(esi + 0x6bu, (uint8_t)t17);
    t18 = rd8(edi + 0x23u);
    wr8(esi + 0x6cu, (uint8_t)t18);
    t19 = rd8(edi + 0x24u);
    wr8(esi + 0x6du, (uint8_t)t19);
    t20 = rd8(edi + 0x25u);
    t21 = rd8(esi + 0x6eu);
    wr8(esi + 0x6eu, (uint8_t)(((t20 ^ t21) & 1u) ^ t21));
    t22 = rd8(edi + 0x25u);
    wr8(esi + 0x6eu, (uint8_t)(((t22 ^ t21) & 2u) ^ ((t20 ^ t21) & 1u) ^ t21));
    g->eax = (((eax & 0xffff0000u) | t12 | t15 | t18) & 0xffffff00u) | (((t20 ^ t21) & 1u) ^ t21);
    g->edx = ((edx | t14 | t17) & 0xffffff00u) | (uint8_t)(((t22 ^ t21) & 2u) ^ ((t20 ^ t21) & 1u) ^ t21);
    g->esp = sp0 - 0x14u;
    t23 = cow_stdcall(g, COW_IMG(0x100e9a70u), 0);
    t24 = g->edx;
    g->edx = t24;
    return (t23 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
