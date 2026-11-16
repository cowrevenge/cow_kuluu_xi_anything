/* f_0x1010c590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010c590(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101094d0u), in_eax, self + 0x1010u, g->edx, 0, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self) == 0u) goto L_1010c6d2;
    ecx = t1;
    edx = t2;
L_1010c5ac: ;
    if (rd32(self + 0x1008u) != 0u)
    {
        eax = rd32(self + 0x1008u);
        zf = rd32(self + 0x1008u) == 0u;
        sf = (int32_t)rd32(self + 0x1008u) < 0;
    }
    else
    {
        t3 = rd32(self);
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, self + 4u, 1u, 0x1000u, t3, in_edi, in_esi);
        t5 = g->edx;
        wr32(self + 0x1008u, t4);
        wr32(self + 0x1004u, self + 4u);
        eax = t4;
        edx = t5;
        zf = t4 == 0u;
        sf = (int32_t)t4 < 0;
    }
    if (zf || sf) goto L_1010c653;
    if (rd8(self + 0x100cu) != 0u)
    {
        if (rd8(rd32(self + 0x1004u)) != 0xau)
        {
            eax = rd32(self + 0x1004u);
        }
        else
        {
            eax = rd32(self + 0x1004u);
            wr8(self + 0x100cu, 0u);
            wr32(self + 0x1004u, eax + 1u);
            t6 = rd32(self + 0x1008u) - 1u;
            wr32(self + 0x1008u, t6);
            eax = t6;
        }
    }
    t7 = rd32(self + 0x1004u);
    if ((int32_t)rd32(self + 0x1008u) <= 0)
    {
        ecx = t7;
        goto L_1010c62b;
    }
    ecx = t7;
    ebp = rd32(self + 0x1008u);
    edi = t7;
L_1010c61b: ;
    if (rd8(edi) == 0xdu)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        goto L_1010c66d;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    if ((uint8_t)eax == 0xau) goto L_1010c668;
    if ((int32_t)(ebp - 1u) > 0)
    {
        ebp = ebp - 1u;
        edi = edi + 1u;
        goto L_1010c61b;
    }
L_1010c62b: ;
    t9 = (edx & 0xffff0000u) | rd16(self + 0x1008u);
    g->edx = t9;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10109340u), self + 0x1010u, 2, ecx, t9);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(self + 0x1008u, 0u);
    wr32(self + 0x1004u, self + 4u);
    ecx = t10;
    edx = t11;
    goto L_1010c5ac;
L_1010c653: ;
    if (rd32(self + 0x1014u) == 0u)
    {
        eax = rd32(self + 0x1014u);
        ecx = 0u;
    }
    else
    {
        eax = rd32(self + 0x1014u);
        ecx = rd32(eax + 4u);
    }
    if (eax == 0u) goto L_1010c6d2;
    if (ecx == 0u) goto L_1010c6d2;
    if (rd8(ecx) == 0u) goto L_1010c6d2;
    wr16(self + 0x100eu, (uint16_t)(rd16(self + 0x100eu) + 1u));
    return self + 0x1010u;
L_1010c668: ;
    if (rd8(edi) != 0xdu) goto L_1010c684;
L_1010c66d: ;
    wr8(edi, 0u);
    if ((int32_t)ebp <= 0) goto L_1010c67d;
    if (rd8(edi + 1u) != 0xau) goto L_1010c67d;
    ebp = ebp - 1u;
    edi = edi + 1u;
L_1010c684: ;
    wr8(edi, 0u);
    t8 = rd32(self + 0x1004u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101093b0u), self + 0x1010u, 1, t8);
    wr16(self + 0x100eu, (uint16_t)(rd16(self + 0x100eu) + 1u));
    wr32(self + 0x1004u, edi + 1u);
    wr32(self + 0x1008u, ebp - 1u);
    return self + 0x1010u;
L_1010c67d: ;
    wr8(self + 0x100cu, 1u);
    goto L_1010c684;
L_1010c6d2: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010c590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010c590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
