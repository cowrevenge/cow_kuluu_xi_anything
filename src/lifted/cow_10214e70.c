/* f_0x10214e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=5 */
uint32_t cow_fn_10214e70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t1 = rd32(sp0 + 4u);
    t2 = rd16(self + 0x17cu);
    t3 = rd32(sp0 + 8u);
    t4 = rd32(rd32(sp0 + 8u));
    wr32(sp0 + 4u, t1);
    if ((int32_t)t4 < (int16_t)t2)
    {
        eax = (uint32_t)(int16_t)t2;
        goto L_10214ff8;
    }
    eax = (uint32_t)(int16_t)t2;
    ecx = t3;
    edx = t4;
    edi = t1;
    if ((int32_t)edx > (int32_t)(eax + rd16(self + 0x184u))) goto L_10214ff8;
    ebx = eax + rd16(self + 0x184u);
    if ((int32_t)rd32(ecx + 4u) < (int16_t)rd16(self + 0x17eu))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x17eu);
        goto L_10214ff8;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x17eu);
    ebp = rd32(ecx + 4u);
    if ((int32_t)ebp > (int32_t)(eax + rd16(self + 0x186u))) goto L_10214ff8;
    if ((uint16_t)edi != 0u) goto L_10214ff8;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        goto L_10214ff8;
    }
    eax = rd32(COW_IMG(0x104e1d4cu));
    t5 = (eax & 0xffffff00u) | (uint8_t)rd16(self + 0x178u) >> 4u;
    t6 = rd16(self + 0x178u);
    wr32(sp0 + 8u, t5 & 0xfu);
    if ((t5 & 0xfu) != 0u)
    {
        zf = (t5 & 0xfu) == 0u;
        goto L_10214fa5;
    }
    ecx = t5 & 0xfu;
    ebx = (ebx & 0xffff0000u) | t6;
    if ((ebx & 0xfu) == 0u) goto L_10214fa2;
    if ((int32_t)edx < (int16_t)rd16(arg3)) goto L_10214f3e;
    ebx = (uint32_t)(int16_t)rd16(arg3);
    if ((int32_t)edx > (int32_t)(ebx + rd16(arg3 + 8u))) goto L_10214f3a;
    if ((int32_t)ebp < (int16_t)rd16(arg3 + 2u)) goto L_10214f3a;
    ecx = (uint32_t)(int16_t)rd16(arg3 + 2u);
    if ((int32_t)ebp <= (int32_t)(ecx + rd16(arg3 + 0xau))) goto L_10214f65;
L_10214f3a: ;
    ecx = rd32(sp0 + 8u);
L_10214f3e: ;
    if ((int32_t)edx < (int16_t)rd16(arg4)) goto L_10214fa2;
    edi = (uint32_t)(int16_t)rd16(arg4);
    if ((int32_t)edx > (int32_t)(edi + rd16(arg4 + 8u))) goto L_10214fa2;
    if ((int32_t)ebp < (int16_t)rd16(arg4 + 2u)) goto L_10214fa2;
    edx = (uint32_t)(int16_t)rd16(arg4 + 2u);
    if ((int32_t)ebp > (int32_t)(edx + rd16(arg4 + 0xau))) goto L_10214fa2;
L_10214f65: ;
    if (rd32(self + 0x154u) == (uint32_t)(int16_t)arg5)
    {
        eax = arg4;
    }
    else
    {
        g->eax = arg4;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    wr8(self + 0x178u, rd8(self + 0x178u) & 0xf0u);
    wr32(self + 0x154u, (uint32_t)(int16_t)arg5);
    wr32(sp0 + 4u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x10215010u), self, 0);
    return (t9 & 0xffff0000u) | rd16(sp0 + 4u);
L_10214fa2: ;
    zf = (uint16_t)ecx == 0u;
L_10214fa5: ;
    if (zf)
    {
        eax = arg4;
    }
    else
    {
        if (rd32(self + 0x154u) != (uint32_t)(int16_t)arg5)
        {
            eax = arg4;
        }
        else
        {
            wr32(sp0 - 0x1cu, 0u);
            t10 = (uint32_t)(int16_t)rd16(arg4) + (rd16(arg4 + 8u) >> 1u);
            wr32(sp0 - 8u, t10);
            wr32(sp0 - 0x20u, sp0 - 8u);
            t11 = (uint32_t)(int16_t)rd16(arg4 + 2u) + (rd16(arg4 + 0xau) >> 1u);
            wr32(sp0 - 4u, t11);
            g->esp = sp0 - 0x18u;
            t12 = cow_call_regs(g, COW_IMG(0x10124700u), sp0 - 8u, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, 0u);
            wr8(self + 0x178u, 0u);
            wr32(sp0 + 4u, 1u);
            eax = t12;
        }
    }
L_10214ff8: ;
    return (eax & 0xffff0000u) | rd16(sp0 + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10214e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10214e70(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
