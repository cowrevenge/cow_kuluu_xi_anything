/* f_0x100f67a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f67a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(sp0 + 8u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = rd32(sp0 + 8u);
        goto L_100f67f6;
    }
    ebx = rd32(sp0 + 8u);
    if (rd16(rd32(arg1) + 0x14u) > 0xc8u) goto L_100f67c2;
    return 0x17u;
L_100f67c2: ;
    wr16(arg1 + 0xe4u, 0u);
    wr16(arg1 + 0xe6u, 0u);
    edi = arg1 + 0xc48u;
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->edx = arg1 + 0xc48u;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 8u, arg1 + 0xc48u, 0x200u, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_100f67f6: ;
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
        eax = t3;
        edx = t4;
        if (rd16(arg1 + 0xe4u) > 0xc8u)
        {
            ebx = arg1 + 0xe8u;
            edi = 0u;
L_100f681a: ;
            if ((int32_t)edi >= (int32_t)(rd16(arg1 + 0xe4u) - 0xc8u)) goto L_100f687a;
            ecx = rd16(arg1 + 0xe4u) - 0xc8u;
            g->edx = arg1 + 0xe48u;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x1031042du), 2, ebx, arg1 + 0xe48u);
            t5 = g->edx;
            g->ecx = arg1;
            g->edx = t5;
            t6 = cow_stdcall(g, COW_IMG(0x100f4250u), 3, 0u, 0u, 0u);
            t7 = g->ecx;
            t8 = g->edx;
            if (t6 != 0x16u)
            {
                ecx = t7;
                edx = t8;
                goto L_100f6861;
            }
            edx = t8;
L_100f684f: ;
            g->ecx = arg1;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t9 = cow_stdcall(g, COW_IMG(0x100f4250u), 3, 1u, 0u, 0u);
            t10 = g->ecx;
            t11 = g->edx;
            if (t9 == 0x16u)
            {
                edx = t11;
                goto L_100f684f;
            }
            ecx = t10;
            edx = t11;
L_100f6861: ;
            if (rd16(rd32(arg1) + 0x14u) == 0u)
            {
                eax = rd32(arg1);
            }
            else
            {
                eax = rd32(arg1);
                ecx = (ecx & 0xffff0000u) | rd16(rd32(arg1) + 0x14u);
                wr16(eax + 0x14u, (uint16_t)(ecx - 1u));
            }
            if ((int32_t)(edi + 1u) < 4)
            {
                ebx = ebx + 0x48u;
                edi = edi + 1u;
                goto L_100f681a;
            }
        }
    }
L_100f687a: ;
    g->edx = edx;
    return rd32(sp0 + 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f67a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f67a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
