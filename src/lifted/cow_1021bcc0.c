/* f_0x1021bcc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_1021bcc0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 4544u);

    wr32(sp0 - 0x119cu, in_ebx);
    wr32(sp0 - 0x11a0u, in_ebp);
    wr32(sp0 - 0x11a4u, in_esi);
    wr32(sp0 - 0x11a8u, in_edi);
    eax = 0u;
    ecx = self;
    edx = self + 0x804u;
    ebp = sp0 - 0x1074u;
L_1021bcdf: ;
    wr8(eax + sp0 - 0x1078u, rd8(eax + self + 0x18u));
    esi = edx;
    edi = ebp;
    ecx = 0xa2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        edx = edx + 0x288u;
        ebp = ebp + 0x288u;
        goto L_1021bcdf;
    }
    eax = self + 0x80u;
    ecx = sp0 - 0x642u;
    esi = 0x51u;
L_1021bd19: ;
    t1 = rd32(eax - 0x14u);
    wr32(ecx - 0x12u, t1);
    t2 = rd32(eax - 0x10u);
    wr32(ecx - 0xeu, t2);
    t3 = rd32(eax - 0xcu);
    wr32(ecx - 0xau, t3);
    t4 = rd32(eax - 8u);
    wr32(ecx - 6u, t4);
    t5 = rd8(eax - 4u);
    wr8(ecx - 2u, (uint8_t)t5);
    t6 = rd16(eax);
    wr16(ecx, (uint16_t)t6);
    if (esi != 1u)
    {
        eax = eax + 0x18u;
        ecx = ecx + 0x14u;
        esi = esi - 1u;
        goto L_1021bd19;
    }
    edx = ((t4 | t5) & 0xffff0000u) | t6;
    ebx = t3;
    if (arg1 == 0u) goto L_1021bda1;
    if (rd8(arg1) == 0u) goto L_1021bda1;
    wr32(sp0 - 0x11a4u, 1u);
    wr32(sp0 - 0x11a8u, 0u);
    wr32(sp0 - 0x11acu, 0u);
    wr32(sp0 - 0x11b0u, 0x1078u);
    wr32(sp0 - 0x11b4u, sp0 - 0x1078u);
    wr32(sp0 - 0x11b8u, arg1);
    wr32(sp0 - 0x11bcu, 0x10780208u);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x11a0u;
    t7 = cow_thiscall(g, COW_IMG(0x101b9880u), sp0 - 0x1198u, 7, 0x10780208u, arg1, sp0 - 0x1078u, 0x1078u, 0u, 0u, 1u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x101b9a10u), sp0 - 0x1198u, 0);
    t10 = g->edx;
    t11 = cow_thiscall(g, COW_IMG(0x101b9a00u), sp0 - 0x1198u, 0);
    return (t11 & 0xffffff00u) | (uint8_t)t9;
L_1021bda1: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bcc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021bcc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
