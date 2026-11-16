/* f_0x1000c900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1000c900(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
        goto L_1000c9dd;
    }
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    ebp = t1;
    esi = 0u;
L_1000c931: ;
    wr32(sp0 - 0x20u, ebp);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0x15u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 2u);
    wr32(sp0 - 0x38u, 0x400u);
    t2 = rd32(self + 0xcu);
    wr32(sp0 - 0x3cu, t2);
    g->esp = sp0 - 0x1cu;
    t3 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t2, 0x400u, 2u, 1u, 0u, 0x15u, 1u, ebp);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        goto L_1000c9e9;
    }
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, rd32(ebp));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(rd32(ebp)) + 0x40u), rd32(rd32(ebp)), 5, rd32(ebp), 0u, sp0 - 8u, 0u, 0u);
    ebp = 0u;
L_1000c968: ;
    eax = rd32(sp0 - 4u) + rd32(sp0 - 8u) * ebp;
    edx = 0u;
L_1000c977: ;
    if (!(edx & 1u))
    {
        ecx = edx & 1u;
        t4 = rd8(arg2 + esi);
        wr8(eax, (uint8_t)t4);
        t5 = rd8(arg2 + esi + 1u);
        wr8(eax + 1u, (uint8_t)t5);
        t6 = rd8(arg2 + esi + 2u);
        wr8(eax + 2u, (uint8_t)t6);
        t7 = rd8(arg2 + esi + 3u);
        wr8(eax + 3u, (uint8_t)t7);
        ecx = ((ecx | t4 | t5 | t6) & 0xffffff00u) | t7;
    }
    else
    {
        ecx = edx & 1u;
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
        }
        else
        {
            ecx = ecx - 1u;
            wr8(eax, 0u);
            wr8(eax + 1u, 0u);
            wr8(eax + 2u, 0u);
            wr8(eax + 3u, 0u);
        }
    }
    if ((int32_t)(edx + 1u) < 1024)
    {
        eax = eax + 4u;
        edx = edx + 1u;
        goto L_1000c977;
    }
    if ((int32_t)(ebp + 1u) < 2)
    {
        ebp = ebp + 1u;
        goto L_1000c968;
    }
    wr32(sp0 - 0x20u, 0u);
    t8 = rd32(rd32(sp0 + 4u));
    wr32(sp0 - 0x24u, t8);
    g->eax = t8;
    t9 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall(g, rd32(rd32(t8) + 0x44u), ecx, 2, t8, 0u);
    wr32(sp0 + 4u, t9 + 4u);
    if ((int32_t)(esi + 4u) < 8)
    {
        esi = esi + 4u;
        goto L_1000c92d;
    }
    eax = t10;
L_1000c9dd: ;
    return (eax & 0xffffff00u) | 1u;
L_1000c92d: ;
    ebp = rd32(sp0 + 4u);
    goto L_1000c931;
L_1000c9e9: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000c900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000c900(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
