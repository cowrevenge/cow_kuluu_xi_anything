/* f_0x101c7b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c7b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 544u);

    wr32(sp0 - 0x204u, in_ebp);
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, in_edi);
    wr32(sp0 - 0x210u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x20cu;
    t1 = cow_thiscall(g, COW_IMG(0x101c7b40u), self, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101c7c3e;
    }
    eax = t1;
    edx = t2;
    edi = 0u;
L_101c7ba2: ;
    if (rd32(edi * 4u + self) == 0u) goto L_101c7bb0;
    if ((int32_t)(edi + 1u) < 4)
    {
        edi = edi + 1u;
        goto L_101c7ba2;
    }
L_101c7bb4: ;
    wr32(sp0 - 0x210u, in_ebx);
    eax = 1u;
    edx = rd32(self + 0x18u);
    ebx = self + 0x1cu;
    edi = 0u;
L_101c7bc2: ;
    if (rd32(ebx) < edx)
    {
        ecx = rd32(ebx);
        edx = ecx;
        edi = eax;
    }
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ebx = ebx + 4u;
        goto L_101c7bc2;
    }
    eax = eax + 1u;
    if (rd32(edi * 4u + self) != 0u)
    {
        ecx = rd32(edi * 4u + self);
        wr32(sp0 - 0x210u, 1u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t3 = rd32(ecx);
        g->esp = sp0 - 0x20cu;
        t4 = cow_thiscall(g, rd32(t3 + 0x18u), ecx, 1, 1u);
        t5 = g->edx;
        wr32(edi * 4u + self, 0u);
        eax = t4;
        edx = t5;
    }
L_101c7beb: ;
    wr32(sp0 - 0x210u, arg1);
    wr32(sp0 - 0x214u, 2u);
    wr32(sp0 - 0x218u, 0x1ffu);
    wr32(sp0 - 0x21cu, sp0 - 0x200u);
    g->eax = eax;
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x20cu;
    t6 = cow_cdecl(g, COW_IMG(0x10310997u), 4, sp0 - 0x200u, 0x1ffu, 2u, arg1);
    t7 = g->ecx;
    if ((int32_t)t6 >= 0)
    {
        ecx = t7;
        goto L_101c7c12;
    }
    g->esi = rd32(sp0 - 0x208u);
    g->edi = rd32(sp0 - 0x20cu);
    g->ebp = rd32(sp0 - 0x204u);
    return 0u;
L_101c7bb0: ;
    if ((int32_t)edi >= 0) goto L_101c7beb;
    goto L_101c7bb4;
L_101c7c12: ;
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    g->esp = sp0 - 0x20cu;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10253870u), ecx, 1, sp0 - 0x200u);
    t9 = g->ecx;
    wr32(edi * 4u + self, t8);
    wr16(edi * 2u + self + 0x10u, (uint16_t)(uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 3u)) >> 2u));
    t10 = cow_thiscall(g, COW_IMG(0x100dbe10u), t9, 0);
    wr32(edi * 4u + self + 0x18u, t10);
    eax = rd32(edi * 4u + self);
L_101c7c3e: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c7b80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
