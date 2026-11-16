/* f_0x1011e360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011e360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->eax = arg1;
    g->ecx = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, sp0 - 8u, arg1, 1u, in_edi, in_esi, in_ebp, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(sp0 - 8u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(sp0 - 8u);
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | rd8(sp0 - 8u);
        ecx = t2;
        edx = t3;
        eax = eax & 0xffffff00u;
        loc_8 = rd32(sp0 - 8u) & 0xffffff00u;
    }
    if ((uint8_t)eax == 0u) goto L_1011e3dd;
    ebx = 0u;
L_1011e391: ;
    wr32(sp0 - 0x1cu, 0xd0u);
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xd0u, in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_1011e3ef;
    }
    eax = t4;
    edx = t5;
    ebp = t4;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10126320u), ebp, 0);
    edi = ebp + 0x32u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, arg1);
    wr32(ebp + 0x4cu, eax);
    g->eax = eax;
    g->edx = arg1;
    t6 = cow_thiscall(g, COW_IMG(0x1011e4e0u), ebp, 1, arg1);
    t7 = g->edx;
    wr32(sp0 - 0x1cu, ebp);
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x10126480u), self + 4u, 1, ebp);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)(ebx + 1u) < (int32_t)(uint8_t)rd32(sp0 - 8u))
    {
        ecx = t8;
        edx = t9;
        ebx = ebx + 1u;
        goto L_1011e391;
    }
    edx = t9;
L_1011e3dd: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t11 = g->edx;
    wr32(sp0 - 4u, t10);
    if (t10 != 0u)
    {
        eax = t10;
        edx = t11;
        goto L_1011e3fb;
    }
    eax = t10;
L_1011e3ef: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax & 0xffffff00u;
L_1011e3fb: ;
    wr32(sp0 - 0x1cu, eax);
    g->ecx = self + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t12 = cow_stdcall(g, COW_IMG(0x10126460u), 1, eax);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = rd16(t12 + 0xc0u);
    wr16(self + 0x20u, (uint16_t)t15);
    wr16(self + 0x22u, (uint16_t)t15);
    t16 = rd16(t12 + 0xc8u);
    wr16(self + 0x24u, (uint16_t)t16);
    wr16(self + 0x26u, (uint16_t)t16);
    if (rd8(sp0 - 8u) == 0u)
    {
        edx = t14;
        goto L_1011e490;
    }
    edx = t14;
    ebx = 0u;
L_1011e42b: ;
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->ecx = self + 4u;
    g->esp = sp0 - 0x18u;
    t17 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        edx = t19;
        goto L_1011e490;
    }
    eax = t17;
    ecx = t18;
    eax = eax + 0xc8u;
    edx = 4u;
L_1011e445: ;
    if ((int16_t)rd16(eax - 8u) <= (int16_t)rd16(self + 0x22u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax - 8u);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax - 8u);
        wr16(self + 0x22u, (uint16_t)ecx);
    }
    if ((int16_t)rd16(eax - 8u) >= (int16_t)rd16(self + 0x20u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax - 8u);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax - 8u);
        wr16(self + 0x20u, (uint16_t)ecx);
    }
    if ((int16_t)rd16(eax) <= (int16_t)rd16(self + 0x26u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
        wr16(self + 0x26u, (uint16_t)ecx);
    }
    if ((int16_t)rd16(eax) >= (int16_t)rd16(self + 0x24u))
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
        wr16(self + 0x24u, (uint16_t)ecx);
    }
    if (edx != 1u)
    {
        eax = eax + 2u;
        edx = edx - 1u;
        goto L_1011e445;
    }
    if ((int32_t)(ebx + 1u) < (int32_t)(uint8_t)rd32(sp0 - 8u))
    {
        edx = (uint8_t)rd32(sp0 - 8u);
        ebx = ebx + 1u;
        goto L_1011e42b;
    }
    edx = (uint8_t)rd32(sp0 - 8u);
L_1011e490: ;
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return (t20 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011e360(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
