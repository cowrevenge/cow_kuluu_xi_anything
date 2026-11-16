/* f_0x1021cac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021cac0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1021cb6c;
    }
    if ((uint8_t)arg1 >= rd8(self + rd32(self + 0xcu) + 0x18u))
    {
        eax = rd32(self + 0xcu);
        goto L_1021caeb;
    }
    eax = rd32(self + 0xcu);
    ebx = (in_ebx & 0xffffff00u) | rd8(self + rd32(self + 0xcu) + 0x18u);
    if ((uint8_t)arg2 < (uint8_t)ebx) goto L_1021caf5;
L_1021caeb: ;
    return eax & 0xffffff00u;
L_1021caf5: ;
    t1 = rd32(eax * 0x288u + self + (uint8_t)arg1 * 8u + 0x808u);
    if ((uint8_t)arg1 >= (uint8_t)arg2)
    {
        ebx = rd32(eax * 0x288u + self + (uint8_t)arg1 * 8u + 0x804u);
        ebp = eax * 0x288u + self + 0x804u;
        loc_4 = t1;
        if ((int32_t)(uint8_t)arg1 <= (int32_t)(uint8_t)arg2)
        {
            eax = (uint8_t)arg1;
        }
        else
        {
            eax = (uint8_t)arg1 - (uint8_t)arg2;
            ecx = ebp + (uint8_t)arg1 * 8u;
L_1021cb4e: ;
            t2 = rd32(ecx - 8u);
            wr32(ecx, t2);
            t3 = rd32(ecx - 4u);
            wr32(ecx + 4u, t3);
            if (eax != 1u)
            {
                eax = eax - 1u;
                ecx = ecx - 8u;
                goto L_1021cb4e;
            }
            eax = eax - 1u;
        }
    }
    else
    {
        ebx = rd32(eax * 0x288u + self + (uint8_t)arg1 * 8u + 0x804u);
        ebp = eax * 0x288u + self + 0x804u;
        loc_4 = t1;
        if ((int32_t)(uint8_t)arg1 >= (int32_t)(uint8_t)arg2)
        {
            eax = (uint8_t)arg1;
        }
        else
        {
            esi = ebp + (uint8_t)arg1 * 8u + 8u;
            edi = ebp + (uint8_t)arg1 * 8u;
            ecx = (uint8_t)arg2 * 2u - (uint8_t)arg1 * 2u & 0x3ffffffeu;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            eax = (uint8_t)arg1;
        }
    }
    wr32(ebp + (uint8_t)arg2 * 8u, ebx);
    wr32(ebp + (uint8_t)arg2 * 8u + 4u, loc_4);
L_1021cb6c: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021cac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021cac0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
