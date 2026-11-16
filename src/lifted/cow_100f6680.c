/* f_0x100f6680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f6680(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(sp0 + 8u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = rd32(sp0 + 8u);
        goto L_100f66d6;
    }
    ebx = rd32(sp0 + 8u);
    if (rd16(rd32(arg1) + 0xau) > 0xc8u) goto L_100f66a2;
    return 0x17u;
L_100f66a2: ;
    wr16(arg1 + 0xe4u, 0u);
    wr16(arg1 + 0xe6u, 0u);
    edi = arg1 + 0xc48u;
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->edx = arg1 + 0xc48u;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 7u, arg1 + 0xc48u, 0x200u, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_100f66d6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x100f6980u), arg1, 1, ebx);
    t4 = g->edx;
    wr32(sp0 + 8u, t3);
    if (t3 != 0x17u)
    {
        edx = t4;
    }
    else
    {
        edx = t4;
        if (rd16(arg1 + 0xe4u) > 0xc8u)
        {
            ebx = 0u;
            edi = arg1 + 0x126u;
L_100f6702: ;
            if ((int32_t)ebx >= (int32_t)(rd16(arg1 + 0xe4u) - 0xc8u)) goto L_100f6789;
            ecx = rd16(arg1 + 0xe4u) - 0xc8u;
            g->ecx = ecx;
            g->edx = arg1 + 0xe48u;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10310422u), 2, edi - 0x3eu, arg1 + 0xe48u);
            t5 = g->ecx;
            t6 = g->edx;
            if (rd16(rd32(arg1) + 0xau) == 0u)
            {
                ecx = (t5 & 0xffff0000u) | rd16(rd32(arg1) + 0xau);
                edx = t6;
            }
            else
            {
                eax = rd32(arg1);
                ecx = (t5 & 0xffff0000u) | rd16(rd32(arg1) + 0xau);
                edx = t6;
                wr16(eax + 0xau, (uint16_t)(ecx - 1u));
                ecx = ecx - 1u;
            }
            if ((rd16(edi) & 0xf80u) == 0xf00u)
            {
                ecx = rd16(edi) & 0xf80u;
                if (rd16(rd32(arg1) + 0x10u) != 0u)
                {
                    eax = rd32(arg1);
                    ecx = (ecx & 0xffff0000u) | rd16(rd32(arg1) + 0x10u);
                    wr16(eax + 0x10u, (uint16_t)(ecx - 1u));
                }
            }
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t7 = cow_stdcall(g, COW_IMG(0x100f4250u), 3, 0u, 0u, 0u);
            t8 = g->edx;
            if (t7 != 0x16u)
            {
                edx = t8;
                goto L_100f677c;
            }
            edx = t8;
L_100f676a: ;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t9 = cow_stdcall(g, COW_IMG(0x100f4250u), 3, 1u, 0u, 0u);
            t10 = g->edx;
            if (t9 == 0x16u)
            {
                edx = t10;
                goto L_100f676a;
            }
            edx = t10;
L_100f677c: ;
            if ((int32_t)(ebx + 1u) < 4)
            {
                ebx = ebx + 1u;
                edi = edi + 0x48u;
                goto L_100f6702;
            }
        }
    }
L_100f6789: ;
    g->edx = edx;
    return rd32(sp0 + 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f6680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
