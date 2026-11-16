/* f_0x101f06e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101f06e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc3e0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_101f06fb;
    }
    edx = t2;
    g->edx = edx;
    return 0x80404040u;
L_101f06fb: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x1015b6f0u), arg2, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_101f072a;
    }
    ecx = t4;
    edx = t5;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x101cc3a0u), g->eax, ecx, edx, 1, 3, arg1, 0u, rd32(sp0 - 0x10u));
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101f072a;
    }
    edx = t7;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80407090u;
L_101f072a: ;
    wr32(sp0 - 0x14u, 0u);
    t8 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x18u, t8);
    g->esp = sp0 - 0x10u;
    t9 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), edx, 2, t8, 0u);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u) goto L_101f074c;
    edx = t10;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80509050u;
L_101f074c: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, sp0 - 5u);
    wr32(sp0 - 0x20u, 0u);
    g->edx = sp0 - 5u;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 4u, 4, 0u, sp0 - 5u, sp0 - 4u, 1u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        ecx = t12;
        goto L_101f0791;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    if (rd8(sp0 - 5u) != rd8(arg1 + 2u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
        goto L_101f0791;
    }
    if ((uint8_t)rd32(sp0 - 4u) != rd32(COW_IMG(0x10663780u)))
    {
        ecx = (uint8_t)rd32(sp0 - 4u);
        goto L_101f0791;
    }
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80509050u;
L_101f0791: ;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, sp0 - 5u);
    wr32(sp0 - 0x20u, 0u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, sp0 - 5u, sp0 - 4u, 2u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        edx = t16;
        goto L_101f07d6;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    if (rd8(sp0 - 5u) != rd8(arg1 + 2u)) goto L_101f07d6;
    if ((uint8_t)rd32(sp0 - 4u) != rd32(COW_IMG(0x10663780u)))
    {
        edx = (uint8_t)rd32(sp0 - 4u);
        goto L_101f07d6;
    }
    edx = (uint8_t)rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80509050u;
L_101f07d6: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x1015b6c0u), arg2, 0);
    t18 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        edx = t18;
        goto L_101f0801;
    }
    edx = t18;
    if (rd16(rd32(arg2 + 0x14b4u)) == 8u) goto L_101f0801;
    eax = (rd32(arg2 + 0x14b4u) & 0xffff0000u) | rd16(rd32(arg2 + 0x14b4u));
    if ((uint16_t)eax == 0x16u) goto L_101f0801;
    if ((uint16_t)eax != 0x17u)
    {
        eax = 0x80808080u;
        goto L_101f0806;
    }
L_101f0801: ;
    eax = 0x80909040u;
L_101f0806: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f06e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f06e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
