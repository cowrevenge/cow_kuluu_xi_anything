/* f_0x100e99b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e99b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_100e9a5a;
    }
    if (arg2 == 0u)
    {
        eax = arg1;
        goto L_100e9a5a;
    }
    t1 = cow_divu(g, arg1, 0x14u);
    t2 = cow_modu(g, arg1, 0x14u);
    t3 = cow_divu(g, arg2, 0x14u);
    t4 = cow_modu(g, arg2, 0x14u);
    if (t1 != t3)
    {
        eax = t3;
        goto L_100e9a5a;
    }
    eax = t3;
    ecx = t1;
    esi = t2;
    edi = t4;
    if ((int32_t)ecx >= 7) goto L_100e9a5a;
    if ((int32_t)eax >= 7) goto L_100e9a5a;
    if ((int32_t)esi >= (int32_t)edi)
    {
        eax = esi;
        edx = ecx * 0x64u + esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x9548u;
        ebx = (in_ebx & 0xffffff00u) | rd8(ecx * 0x64u + esi + rd32(COW_IMG(0x104dfd98u)) + 0x9534u);
        ebp = rd32(ecx * 0x64u + esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x9548u);
        ecx = ecx * 0x64u + rd32(COW_IMG(0x104dfd98u)) + 0x9534u;
        zf = esi == edi;
        sf = (int32_t)(esi - edi) < 0;
        of = ((esi ^ edi) & (esi ^ esi - edi)) >> 0x1fu;
        if (!(zf || sf != of))
        {
            esi = edx;
L_100e9a33: ;
            wr8(eax + ecx, rd8(eax + ecx - 1u));
            t6 = rd32(esi - 4u);
            wr32(esi, t6);
            if ((int32_t)(eax - 1u) > (int32_t)edi)
            {
                eax = eax - 1u;
                edx = t6;
                esi = esi - 4u;
                goto L_100e9a33;
            }
            eax = eax - 1u;
            edx = t6;
        }
    }
    else
    {
        eax = esi;
        edx = ecx * 0x64u + esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x9548u;
        ebx = (in_ebx & 0xffffff00u) | rd8(ecx * 0x64u + esi + rd32(COW_IMG(0x104dfd98u)) + 0x9534u);
        ebp = rd32(ecx * 0x64u + esi * 4u + rd32(COW_IMG(0x104dfd98u)) + 0x9548u);
        ecx = ecx * 0x64u + rd32(COW_IMG(0x104dfd98u)) + 0x9534u;
        esi = edx;
L_100e9a19: ;
        wr8(eax + ecx, rd8(eax + ecx + 1u));
        t5 = rd32(esi + 4u);
        wr32(esi, t5);
        if ((int32_t)(eax + 1u) < (int32_t)edi)
        {
            eax = eax + 1u;
            edx = t5;
            esi = esi + 4u;
            goto L_100e9a19;
        }
        eax = eax + 1u;
        edx = t5;
    }
    wr8(eax + ecx, (uint8_t)ebx);
    wr32(eax * 4u + ecx + 0x14u, ebp);
    g->esp = sp0 - 0x10u;
    t7 = cow_stdcall(g, COW_IMG(0x100e9a70u), 0);
    return (t7 & 0xffffff00u) | 1u;
L_100e9a5a: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e99b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e99b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
