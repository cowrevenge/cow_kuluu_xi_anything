/* f_0x10195570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10195570(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 3344u);

    wr32(sp0 - 0xcf4u, in_ebp);
    wr32(sp0 - 0xcf8u, in_edi);
    wr32(sp0 - 0xcfcu, 0u);
    wr32(sp0 - 0xd00u, 0u);
    wr32(sp0 - 0xd04u, 0x33cu);
    wr32(sp0 - 0xd08u, sp0 - 0xcf0u);
    wr32(sp0 - 0xd0cu, COW_IMG(0x10379a00u));
    g->eax = sp0 - 0xcf0u;
    g->esp = sp0 - 0xcf8u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, COW_IMG(0x10379a00u), sp0 - 0xcf0u, 0x33cu, 0u, 0u);
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        goto L_10195633;
    }
    eax = t1;
    if (rd32(sp0 - 0xcf0u) != 1u) goto L_10195633;
    wr32(sp0 - 0xcfcu, in_ebx);
    wr32(sp0 - 0xd00u, in_esi);
    ebx = sp0 - 0xcecu;
    edi = 0u;
L_101955b1: ;
    if (rd32(edi * 0x2cu + rd32(self + 4u) + 0xcu) == 6u)
    {
        eax = edi * 0x2cu + rd32(self + 4u);
        ecx = rd32(edi * 0x2cu + rd32(self + 4u) + 0xcu);
        edx = edi * 0xbu;
        esi = rd32(self + 4u);
        if (edi != 0xabu)
        {
            wr32(sp0 - 0xd04u, rd32(ebx));
            wr32(sp0 - 0xd08u, eax);
            g->esp = sp0 - 0xd00u;
            cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, rd32(ebx));
            ebx = ebx + 4u;
        }
        else
        {
            if (rd32(esi + 0x1d68u) != 0x43u)
            {
                eax = rd32(esi + 0x1d84u);
            }
            else
            {
                wr32(sp0 - 0xd04u, edi);
                g->esp = sp0 - 0xd00u;
                t2 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, edi);
                eax = t2;
            }
            t3 = rd32(esi + 0x1d88u);
            wr32(esi + 0x1d6cu, eax);
            if (t3 != 0u)
            {
                ecx = t3;
                wr32(sp0 - 0xd04u, eax);
                t4 = rd32(esi + 0x1d68u);
                wr32(sp0 - 0xd08u, t4);
                g->esp = sp0 - 0xd00u;
                cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, eax, 2, t4, eax);
            }
            ebx = ebx + 4u;
        }
    }
    if ((int32_t)(edi + 1u) < 207)
    {
        edi = edi + 1u;
        goto L_101955b1;
    }
    return 1u;
L_10195633: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10195570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10195570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
