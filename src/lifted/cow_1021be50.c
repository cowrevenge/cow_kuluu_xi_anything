/* f_0x1021be50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021be50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 4540u);

    wr32(sp0 - 0x119cu, in_ebx);
    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_1021bf48;
    }
    if (rd8(arg1) == 0u)
    {
        eax = arg1;
        goto L_1021bf48;
    }
    wr32(sp0 - 0x11a0u, 1u);
    wr32(sp0 - 0x11a4u, 0u);
    wr32(sp0 - 0x11a8u, 0u);
    wr32(sp0 - 0x11acu, 0x1078u);
    wr32(sp0 - 0x11b0u, sp0 - 0x1078u);
    wr32(sp0 - 0x11b4u, arg1);
    wr32(sp0 - 0x11b8u, 0x10780208u);
    g->edx = in_edx;
    g->esp = sp0 - 0x119cu;
    cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x1198u, 7, 0x10780208u, arg1, sp0 - 0x1078u, 0x1078u, 0u, 0u, 1u);
    t1 = g->edx;
    wr32(sp0 - 0x11a0u, 0u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101b9bc0u), sp0 - 0x1198u, 1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_1021bf3f;
    }
    ecx = t3;
    wr32(sp0 - 0x11a0u, in_ebp);
    wr32(sp0 - 0x11a4u, in_esi);
    wr32(sp0 - 0x11a8u, in_edi);
    eax = 0u;
    edx = sp0 - 0x1074u;
    ebp = self + 0x804u;
L_1021bebc: ;
    t5 = rd8(eax + sp0 - 0x1078u);
    wr8(eax + self + 0x18u, (uint8_t)t5);
    if ((uint8_t)t5 > 0x51u)
    {
        wr8(eax + self + 0x18u, 0u);
    }
    esi = edx;
    edi = ebp;
    ecx = 0xa2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        edx = edx + 0x288u;
        ebp = ebp + 0x288u;
        goto L_1021bebc;
    }
    eax = eax + 1u;
    edx = edx + 0x288u;
    ebx = self + 0x6cu;
    esi = 0u;
    edi = sp0 - 0x644u;
L_1021befa: ;
    if ((uint16_t)esi != rd8(edi))
    {
        ecx = ebx;
        edx = (edx & 0xffff0000u) | rd8(edi);
        g->edx = edx;
        g->esp = sp0 - 0x11a8u;
        t9 = cow_thiscall(g, COW_IMG(0x1021d270u), ecx, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        ecx = ebx;
        edx = (edx & 0xffff0000u) | rd8(edi);
        wr32(sp0 - 0x11acu, eax);
        t6 = (eax & 0xffff0000u) | rd16(edi + 2u);
        wr32(sp0 - 0x11b0u, t6);
        g->edx = edx;
        g->esp = sp0 - 0x11a8u;
        t7 = cow_thiscall(g, COW_IMG(0x1021d2d0u), ecx, 2, t6, eax);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if ((uint16_t)(esi + 1u) < 0x51u)
    {
        ebx = ebx + 0x18u;
        esi = esi + 1u;
        edi = edi + 0x14u;
        goto L_1021befa;
    }
    g->eax = eax;
    g->esp = sp0 - 0x11a8u;
    t11 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x1198u, 0);
    g->ebx = rd32(sp0 - 0x119cu);
    g->esi = rd32(sp0 - 0x11a4u);
    g->edi = rd32(sp0 - 0x11a8u);
    g->ebp = rd32(sp0 - 0x11a0u);
    return (t11 & 0xffffff00u) | 1u;
L_1021bf3f: ;
    g->eax = eax;
    g->esp = sp0 - 0x119cu;
    t12 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x1198u, 0);
    eax = t12;
L_1021bf48: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021be50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021be50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
