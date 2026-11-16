/* f_0x10210aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10210aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x58u, in_esi);
    if (rd8(arg3 + 9u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 9u);
        goto L_10210ac9;
    }
    t1 = rd32(arg3 + 4u);
    wr32(sp0 - 0x5cu, t1);
    t2 = (self & 0xffffff00u) | rd8(arg3 + 8u);
    wr32(sp0 - 0x60u, t2);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x58u;
    t3 = cow_thiscall(g, COW_IMG(0x1020fee0u), rd32(COW_IMG(0x1066451cu)), 2, t2, t1);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_10210ac9: ;
    wr32(sp0 - 0x5cu, in_edi);
    t5 = (in_edx & 0xffffff00u) | rd8(arg3 + 8u);
    wr32(sp0 - 0x60u, t5);
    wr32(sp0 - 0x64u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x5cu;
    t6 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, t5);
    t7 = rd32(arg3 + 0xcu);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (t7 <= 1u)
    {
        edx = t6;
        wr16(sp0 - 0x4cu, 0xe9u);
    }
    else
    {
        edx = t6;
        esi = t7;
        wr16(sp0 - 0x4cu, 0xe8u);
        wr32(sp0 - 0x44u, esi);
    }
    wr32(sp0 - 0x5cu, sp0 - 0x54u);
    wr32(sp0 - 0x48u, rd16(edx));
    g->eax = rd16(edx);
    g->edx = edx;
    t8 = rd16(edx);
    g->esp = sp0 - 0x58u;
    t9 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t10 = g->edx;
    g->esi = rd32(sp0 - 0x58u);
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
