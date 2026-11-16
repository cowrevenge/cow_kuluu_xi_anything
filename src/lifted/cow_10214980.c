/* f_0x10214980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10214980(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t1);
    if ((int32_t)rd32(arg2) < (int16_t)rd16(self + 0x17cu))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x17cu);
        ebp = t1;
        goto L_10214b21;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x17cu);
    edx = t1;
    ebp = t1;
    edi = rd32(arg2);
    loc_8 = t1;
    if ((int32_t)edi > (int32_t)(eax + rd16(self + 0x184u))) goto L_10214b21;
    if ((int32_t)rd32(arg2 + 4u) < (int16_t)rd16(self + 0x17eu))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x17eu);
        goto L_10214b21;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x17eu);
    ebx = rd32(arg2 + 4u);
    if ((int32_t)ebx > (int32_t)(eax + rd16(self + 0x186u))) goto L_10214b21;
    if ((uint16_t)edx != 0u) goto L_10214b21;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        goto L_10214b21;
    }
    if (rd32(self + 0x10cu) != 0u)
    {
        eax = rd32(self + 0x10cu);
        goto L_10214b21;
    }
    eax = rd32(self + 0x10cu);
    t2 = (eax & 0xffffff00u) | (uint8_t)rd16(self + 0x178u) >> 4u;
    t3 = rd16(self + 0x178u);
    wr32(sp0 + 4u, t2 & 0xfu);
    if ((t2 & 0xfu) != 0u)
    {
        zf = (t2 & 0xfu) == 0u;
        goto L_10214ac0;
    }
    ecx = t2 & 0xfu;
    edx = (edx & 0xffff0000u) | t3;
    if ((edx & 0xfu) == 0u) goto L_10214abd;
    if ((int32_t)edi < (int16_t)rd16(arg3)) goto L_10214a5e;
    ebp = (uint32_t)(int16_t)rd16(arg3);
    if ((int32_t)edi > (int32_t)(ebp + rd16(arg3 + 8u))) goto L_10214a5a;
    if ((int32_t)ebx < (int16_t)rd16(arg3 + 2u)) goto L_10214a5a;
    ecx = (uint32_t)(int16_t)rd16(arg3 + 2u);
    if ((int32_t)ebx <= (int32_t)(ecx + rd16(arg3 + 0xau)))
    {
        edx = arg3;
        goto L_10214a85;
    }
L_10214a5a: ;
    ecx = rd32(sp0 + 4u);
L_10214a5e: ;
    if ((int32_t)edi < (int16_t)rd16(arg4)) goto L_10214abd;
    edx = (uint32_t)(int16_t)rd16(arg4);
    if ((int32_t)edi > (int32_t)(edx + rd16(arg4 + 8u))) goto L_10214abd;
    if ((int32_t)ebx < (int16_t)rd16(arg4 + 2u)) goto L_10214abd;
    edx = (uint32_t)(int16_t)rd16(arg4 + 2u);
    if ((int32_t)ebx > (int32_t)(edx + rd16(arg4 + 0xau))) goto L_10214abd;
L_10214a85: ;
    if (rd32(self + 0x128u) == (uint32_t)(int16_t)arg5)
    {
        eax = arg4;
    }
    else
    {
        g->eax = arg4;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t4 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    wr8(self + 0x178u, rd8(self + 0x178u) & 0xf0u);
    wr32(self + 0x128u, (uint32_t)(int16_t)arg5);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, COW_IMG(0x10215010u), self, 0);
    return (t6 & 0xffff0000u) | 1u;
L_10214abd: ;
    zf = (uint16_t)ecx == 0u;
L_10214ac0: ;
    if (zf) goto L_10214b1d;
    if (rd32(self + 0x128u) != (uint32_t)(int16_t)arg5) goto L_10214b1d;
    wr32(sp0 - 0x1cu, 0u);
    t7 = (uint32_t)(int16_t)rd16(arg4) + (rd16(arg4 + 8u) >> 1u);
    wr32(sp0 - 8u, t7);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t8 = (uint32_t)(int16_t)rd16(arg4 + 2u) + (rd16(arg4 + 0xau) >> 1u);
    wr32(sp0 - 4u, t8);
    g->esp = sp0 - 0x18u;
    t9 = cow_call_regs(g, COW_IMG(0x10124700u), sp0 - 8u, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, 0u);
    wr8(self + 0x178u, 0u);
    return (t9 & 0xffff0000u) | 1u;
L_10214b1d: ;
    eax = arg4;
    ebp = loc_8;
L_10214b21: ;
    return (eax & 0xffff0000u) | (uint16_t)ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10214980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10214980(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
