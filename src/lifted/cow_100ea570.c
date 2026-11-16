/* f_0x100ea570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ea570(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd16(arg3) >> 9u;
    wr32(sp0 - 0x20u, t1);
    wr32(sp0 - 0x24u, 0x2cu);
    wr32(sp0 - 0x28u, arg3 + 0x28u);
    wr32(sp0 - 0x2cu, 0x10u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->eax = t1;
    g->ecx = arg3 + 0x28u;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0x10u, 0x10u, arg3 + 0x28u, 0x2cu, t1, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_100ea5c1;
    }
    ecx = t3;
    edx = t4;
    t5 = rd32(arg3 + 4u);
    wr32(sp0 - 0x20u, t5);
    t6 = (in_ebx & 0xffffff00u) | rd8(arg3 + 0x1cu);
    wr32(sp0 - 0x24u, t6);
    g->eax = t5;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x100ea4d0u), 6, t6, t5, in_edi, in_esi, in_ebx, rd32(sp0 - 0x10u));
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        esi = t7;
        goto L_100ea5ca;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    ebx = t6;
    wr32(sp0 - 0x20u, ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x100ea140u), 1, ebx);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        esi = t10;
        goto L_100ea5ca;
    }
    eax = t10;
    edx = t12;
L_100ea5c1: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100ea5ca: ;
    wr8(esi + 1u, rd8(arg3 + 0x1au));
    t13 = rd16(arg3 + 0x20u);
    wr16(esi + 0x2eu, (uint16_t)t13);
    t14 = rd16(arg3 + 0x18u);
    wr16(esi + 0x18u, (uint16_t)t14);
    t15 = rd32(arg3 + 0x14u);
    wr32(esi + 0x34u, t15);
    g->eax = (eax & 0xffff0000u) | t14;
    g->esp = sp0 - 0x1cu;
    t16 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    wr32(esi + 0x1cu, t16);
    t17 = rd32(sp0 - 0x10u);
    wr32(esi + 2u, t17);
    t18 = rd32(sp0 - 0xcu);
    wr32(esi + 6u, t18);
    t19 = rd32(sp0 - 8u);
    wr32(esi + 0xau, t19);
    t20 = rd32(sp0 - 4u);
    wr32(esi + 0xeu, t20);
    t21 = rd32(arg3 + 4u);
    wr32(esi + 0x14u, t21);
    t22 = rd32(arg3 + 8u);
    wr32(esi + 0x20u, t22);
    t23 = rd32(arg3 + 0xcu);
    wr32(esi + 0x24u, t23);
    t24 = rd32(arg3 + 0x10u);
    wr32(esi + 0x28u, t24);
    t25 = rd8(arg3 + 0x1du);
    wr8(esi + 0x2cu, (uint8_t)t25);
    t26 = rd8(arg3 + 0x1eu);
    wr8(esi + 0x2du, (uint8_t)t26);
    wr16(esi + 0x30u, 0u);
    if (rd8(arg3 + 0x1bu) == 0u)
    {
        ecx = (t23 & 0xffffff00u) | t26;
        edx = t24;
        eax = 0u;
    }
    else
    {
        eax = ((t22 | t25) & 0xffffff00u) | rd8(arg3 + 0x1bu);
        ecx = (t23 & 0xffffff00u) | t26;
        edx = t24;
        if (rd16(arg3 + 0x20u) == 0u)
        {
            eax = rd16(arg1 + 0x3c350u);
            edx = arg1;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(arg3 + 0x20u);
            eax = (uint16_t)eax;
        }
    }
    wr16(esi + 0x1au, (uint16_t)eax);
    t27 = rd8(arg3 + 0x22u);
    wr8(esi + 0x69u, (uint8_t)t27);
    t28 = rd8(arg3 + 0x23u);
    wr8(esi + 0x6au, (uint8_t)t28);
    t29 = rd8(arg3 + 0x24u);
    wr8(esi + 0x6bu, (uint8_t)t29);
    t30 = rd8(arg3 + 0x25u);
    wr8(esi + 0x6cu, (uint8_t)t30);
    t31 = rd8(arg3 + 0x26u);
    wr8(esi + 0x6du, (uint8_t)t31);
    t32 = rd8(arg3 + 0x27u);
    t33 = rd8(esi + 0x6eu);
    wr8(esi + 0x6eu, (uint8_t)(((t32 ^ t33) & 1u) ^ t33));
    wr8(esi + 0x6eu, (uint8_t)(((rd8(arg3 + 0x27u) ^ t33) & 2u) ^ ((t32 ^ t33) & 1u) ^ t33));
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u) != rd32(esi + 0x14u))
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
        edx = rd32(esi + 0x14u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
        t34 = rd32(esi + 0x34u);
        wr32(eax + 0x97f8u, t34);
        edx = t34;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t35 = cow_stdcall(g, COW_IMG(0x100e9a70u), 0);
    t36 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = t36;
    return (t35 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ea570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ea570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
