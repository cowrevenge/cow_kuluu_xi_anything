/* f_0x102ac3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102ac3c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, in_ebp);
    if (rd32(rd32(rd32(sp0 + 4u) + 0x48u)) != 1u)
    {
        eax = rd32(rd32(rd32(sp0 + 4u) + 0x48u));
        ecx = rd32(rd32(sp0 + 4u) + 0x48u) + 4u;
        ebp = rd32(sp0 + 4u);
        goto L_102ac3db;
    }
    eax = rd32(rd32(rd32(sp0 + 4u) + 0x48u));
    ecx = rd32(rd32(sp0 + 4u) + 0x48u) + 4u;
    ebp = rd32(sp0 + 4u);
    if ((int32_t)rd32(ecx) > 0)
    {
        edx = in_edx;
        goto L_102ac478;
    }
L_102ac3db: ;
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (eax == 0u)
    {
        edx = in_edx;
        edi = 0u;
    }
    else
    {
        edx = in_edx;
        ebx = eax;
        edi = 0u;
L_102ac3e6: ;
        if ((int32_t)rd32(ecx) <= 0)
        {
            esi = rd32(ecx);
            ecx = ecx + 4u;
            edi = edi - esi - 2u;
            esi = -esi;
        }
        else
        {
            esi = rd32(ecx);
            ecx = ecx + 4u;
            q1 = (int64_t)cow_muls(0x55555556u, esi);
            edx = cow_qhi(q1) + (cow_qhi(q1) >> 0x1fu);
            edi = edi + cow_qhi(q1) + (cow_qhi(q1) >> 0x1fu);
        }
        if (ebx != 1u)
        {
            ecx = ecx + esi * 4u;
            ebx = ebx - 1u;
            goto L_102ac3e6;
        }
        ecx = ecx + esi * 4u;
    }
    wr32(sp0 - 0x14u, 0x510u);
    wr32(sp0 - 0x18u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x1cu, 4u);
    t2 = edi * 3u + 2u;
    wr32(sp0 - 0x20u, t2);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t2, 4u, COW_IMG(0x103be980u), 0x510u, in_edi);
    t4 = g->edx;
    wr32(sp0 + 4u, t3);
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(t3, 1u);
    wr32(sp0 - 0x28u, COW_IMG(0x102ac480u));
    t5 = rd32(sp0 + 4u) + 4u;
    wr32(sp0 + 4u, t5);
    wr32(sp0 - 0x2cu, ebp);
    wr32(t5, edi * 3u);
    t6 = rd32(sp0 + 4u) + 4u;
    wr32(sp0 + 4u, t6);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x102abee0u), g->eax, g->ecx, t4, 1, 3, ebp, COW_IMG(0x102ac480u), sp0 + 4u);
    t7 = g->ecx;
    wr32(sp0 - 0x30u, 0x518u);
    wr32(sp0 - 0x34u, COW_IMG(0x103be980u));
    t8 = rd32(ebp + 0x48u);
    wr32(sp0 - 0x38u, t8);
    g->edx = t8;
    g->esp = sp0 - 0x2cu;
    t9 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t8, COW_IMG(0x103be980u), 0x518u);
    t10 = g->edx;
    wr32(ebp + 0x48u, t3);
    wr32(ebp + 0x4cu, t2);
    eax = t9;
    edx = t10;
L_102ac478: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ac3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ac3c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
