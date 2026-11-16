/* f_0x100fd710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fd710(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_ebp);
    if ((uint16_t)rd32(sp0 + 0xcu) == 0u) goto L_100fd80d;
    eax = rd32(sp0 + 0xcu);
    if (arg2 == 0u) goto L_100fd80d;
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 4u, 0u);
    if ((uint16_t)eax != 0u)
    {
        eax = (uint16_t)eax;
        ecx = 3u;
        edi = sp0 - 0x10u;
L_100fd752: ;
        wr32(sp0 + 0xcu, ecx - 1u);
        if ((int32_t)ecx <= 0) goto L_100fd7ab;
        ecx = ecx - 1u;
        t1 = cow_divu(g, eax, 0x64u);
        t2 = cow_modu(g, eax, 0x64u);
        if (t2 == 0u)
        {
            esi = t1;
        }
        else
        {
            edx = t2;
            esi = t1;
            if (edx * arg1 != 0u)
            {
                eax = edx * arg1;
                ecx = edi;
                ebx = 0u;
L_100fd77b: ;
                t3 = cow_divu(g, eax, 0x64u);
                t4 = cow_modu(g, eax, 0x64u);
                t5 = rd8(ecx);
                wr8(ecx, (uint8_t)(t5 + (uint8_t)((uint8_t)ebx + (uint8_t)t4)));
                if (-((uint8_t)(t5 + (uint8_t)((uint8_t)ebx + (uint8_t)t4)) < 0x64u) + 1u == 0u)
                {
                    eax = t3;
                    ebx = -((uint8_t)(t5 + (uint8_t)((uint8_t)ebx + (uint8_t)t4)) < 0x64u) + 1u;
                }
                else
                {
                    eax = t3;
                    ebx = -((uint8_t)(t5 + (uint8_t)((uint8_t)ebx + (uint8_t)t4)) < 0x64u) + 1u;
                    wr8(ecx, (uint8_t)(rd8(ecx) + 0x9cu));
                }
                if (eax != 0u)
                {
                    ecx = ecx + 1u;
                    goto L_100fd77b;
                }
                ecx = rd32(sp0 + 0xcu);
            }
        }
        if (esi != 0u)
        {
            eax = esi;
            edi = edi + 1u;
            goto L_100fd752;
        }
    }
L_100fd7ab: ;
    if (arg2 > 1u)
    {
        ecx = 0u;
        esi = 0u;
L_100fd7b4: ;
        t6 = cow_divu(g, esi + rd8(ecx + sp0 - 0x10u) * arg2, 0x64u);
        t7 = cow_modu(g, esi + rd8(ecx + sp0 - 0x10u) * arg2, 0x64u);
        wr8(ecx + sp0 - 0x10u, (uint8_t)t7);
        if ((int32_t)(ecx + 1u) < 10)
        {
            ecx = ecx + 1u;
            esi = t6;
            goto L_100fd7b4;
        }
    }
    eax = 1u;
    ecx = 2u;
    esi = 0u;
L_100fd7e0: ;
    if ((int32_t)(ecx + 1u) < 10)
    {
        esi = esi + rd8(ecx + sp0 - 0x10u) * eax;
        eax = eax * 0x64u;
        ecx = ecx + 1u;
        goto L_100fd7e0;
    }
    esi = esi + rd8(ecx + sp0 - 0x10u) * eax;
    if (esi != 0u)
    {
        eax = esi;
    }
    else
    {
        eax = 1u;
    }
    return eax;
L_100fd80d: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fd710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fd710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
