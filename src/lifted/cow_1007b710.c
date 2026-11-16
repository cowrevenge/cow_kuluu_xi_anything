/* f_0x1007b710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b710(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x7fu);
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x7fu, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_1007b731;
    edx = t2;
    g->edx = edx;
    return arg3;
L_1007b731: ;
    if ((uint16_t)rd32(COW_IMG(0x10357a0cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10357a0cu));
        edx = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10357a0cu));
        ecx = COW_IMG(0x10357a0cu);
        edx = 0u;
L_1007b746: ;
        if (arg3 != (uint32_t)(int16_t)eax)
        {
            eax = (uint32_t)(int16_t)eax;
        }
        else
        {
            eax = (uint32_t)(int16_t)eax;
            edx = (uint32_t)(int16_t)rd16(ecx + 2u);
        }
        if (rd16(ecx + 4u) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(ecx + 4u);
            ecx = ecx + 4u;
            goto L_1007b746;
        }
        eax = (eax & 0xffff0000u) | rd16(ecx + 4u);
    }
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, edx);
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x28u, t3);
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x1022b430u), eax, rd32(COW_IMG(0x103551e0u)), t3, 1, 3, t3, edx, 1u);
    t5 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0u);
    t6 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0x38u, t6);
    g->ecx = t6;
    g->edx = t5;
    t7 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x28u;
    t8 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t7, g->ecx, g->edx, 1, 4, t6, 0u, 1u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        edx = t10;
        goto L_1007b813;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    esi = t8;
    edi = t4;
    if ((int32_t)edi < 0) goto L_1007b813;
    if ((int32_t)edi >= 1024) goto L_1007b813;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        goto L_1007b7b9;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
    wr32(sp0 - 0x20u, edi);
    g->ebx = arg3;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x1022b850u), eax, ecx, g->edx, 1, 1, edi);
    t11 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = t11;
    return arg3;
L_1007b7b9: ;
    wr32(sp0 - 0x20u, 0xffffffffu);
    g->ebx = arg3;
    g->esp = sp0 - 0x1cu;
    t12 = cow_call_regs(g, COW_IMG(0x1022b850u), eax, ecx, g->edx, 1, 1, 0xffffffffu);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    t13 = cow_call_regs(g, COW_IMG(0x10159cc0u), t12, rd32(COW_IMG(0x1057876cu)), g->edx, 0, 1, sp0 - 0x10u);
    if ((uint8_t)t13 == 0u)
    {
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 8u, 0u);
        loc_10 = 0u;
        loc_8 = 0u;
    }
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, loc_8);
    t14 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t14);
    wr32(sp0 - 0x2cu, loc_10);
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, 3u);
    t15 = rd32(esi + 4u);
    wr32(sp0 - 0x38u, t15);
    wr32(sp0 - 0x3cu, rd32(esi));
    g->edx = loc_10;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x100780d0u), 8, rd32(esi), t15, 3u, edi, loc_10, t14, loc_8, 0u);
    t16 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = t16;
    return arg3;
L_1007b813: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
