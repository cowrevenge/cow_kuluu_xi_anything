/* f_0x10186b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10186b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(rd32(sp0 + 4u) + 0x24u);
    t2 = rd32(sp0 + 4u);
    wr32(t2 + 0x68u, 0u);
    wr32(t2 + 0x70u, 0u);
    if (t1 != 0u)
    {
        eax = t1;
        edi = t2;
        g->esp = sp0 - 0xcu;
        t3 = cow_call_regs(g, COW_IMG(0x10028640u), eax << 2u, self, in_edx, 1, 2, eax << 2u, 4u);
        t4 = rd32(edi + 0x28u);
        t5 = rd32(edi + 0x24u);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)t5 <= 0)
        {
            eax = t4;
            ecx = 0u;
            edx = t5;
            ebx = t3;
        }
        else
        {
            eax = t4;
            ebx = t3;
            ecx = 0u;
            ebp = eax + 0xdcu;
L_10186bc1: ;
            if (rd32(ebp) != 0u)
            {
                edx = rd32(ebp);
                if (rd32(ebp - 0x1cu) == 0u) goto L_10186bdc;
                eax = rd32(ebp - 0x1cu);
                if ((uint8_t)eax == 0x5fu) goto L_10186bdc;
                wr32(ebp, 0u);
            }
L_10186bff: ;
            t6 = rd32(sp0 + 4u) + 1u;
            t7 = rd32(edi + 0x24u);
            t8 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t6);
            if ((int32_t)(t8 + 1u) < (int32_t)t7)
            {
                ebp = ebp + 0x16cu;
                goto L_10186bc1;
            }
            eax = t6;
            edx = t7;
        }
        wr32(edi + 0x68u, ecx);
        if (ecx != 0u)
        {
            g->esp = sp0 - 4u;
            t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, ecx * 4u, in_edi, in_esi);
            wr32(edi + 0x6cu, t9);
            esi = ebx;
            edi = t9;
            ecx = ecx * 4u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = ecx * 4u & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            eax = t9;
            edx = ecx * 4u;
        }
        if (ebx != 0u)
        {
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10028700u), 1, ebx);
        }
    }
    return;
L_10186bdc: ;
    if (ecx == 0u) goto L_10186bfb;
    if ((int32_t)ecx <= 0) goto L_10186bfb;
    eax = 0u;
    esi = 0u;
L_10186be8: ;
    if (rd32(eax * 4u + ebx) == edx)
    {
        esi = 1u;
    }
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_10186be8;
    }
    if (esi != 0u) goto L_10186bff;
L_10186bfb: ;
    wr32(ebx + ecx * 4u, edx);
    ecx = ecx + 1u;
    goto L_10186bff;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10186b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10186b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
