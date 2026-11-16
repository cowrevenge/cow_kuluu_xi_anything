/* f_0x102aea30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102aea30(Guest* g)
{
    double d8;
    double d9;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0x64u);
    t2 = rd32(rd32(sp0 + 4u) + 0x68u);
    t3 = rd32(sp0 + 8u);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    if ((int32_t)t3 >= (int32_t)arg3)
    {
        loc_4 = t1;
        goto L_102aeaf2;
    }
    ecx = t3;
    ebp = t1;
    esi = t1;
    edi = t4;
    loc_4 = t1;
L_102aea59: ;
    t5 = rd32(ecx * 4u + esi);
    wr32(sp0 + 8u, t5);
    t6 = rd32(esi + (uint32_t)((int32_t)(arg3 + ecx - (uint32_t)((int32_t)(arg3 + ecx) >> 0x1fu)) >> 1u) * 4u);
    wr32(ecx * 4u + esi, t6);
    t7 = rd32(sp0 + 8u);
    wr32(esi + (uint32_t)((int32_t)(arg3 + ecx - (uint32_t)((int32_t)(arg3 + ecx) >> 0x1fu)) >> 1u) * 4u, t7);
    if ((int32_t)(ecx + 1u) > (int32_t)arg3)
    {
        esi = ecx;
    }
    else
    {
        edx = ecx + 1u;
        esi = ecx;
L_102aea86: ;
        d8 = (double)rdf32(rd32(sp0 + 4u) + rd32(ebp + edx * 4u) * 4u);
        d9 = (double)rdf32(rd32(sp0 + 4u) + rd32(ebp + ecx * 4u) * 4u);
        if ((cow_fsw(g, d8, d9, 0u) & 0x4100u) == 0u)
        {
            t10 = rd32(edx * 4u + rd32(edi + 0x64u));
            t11 = rd32(edi + 0x64u);
            t12 = rd32(esi * 4u + rd32(edi + 0x64u) + 4u);
            wr32(esi * 4u + t11 + 4u, t10);
            wr32(edx * 4u + t11, t12);
            esi = esi + 1u;
        }
        if ((int32_t)(edx + 1u) <= (int32_t)arg3)
        {
            edx = edx + 1u;
            goto L_102aea82;
        }
    }
    t13 = rd32(esi * 4u + rd32(edi + 0x64u));
    t14 = rd32(edi + 0x64u);
    t15 = rd32(ecx * 4u + rd32(edi + 0x64u));
    wr32(ecx * 4u + t14, t13);
    wr32(esi * 4u + t14, t15);
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x102aea30u), ecx, 3, edi, ecx, esi - 1u);
    t16 = rd32(edi + 0x64u);
    t17 = rd32(edi + 0x68u);
    wr32(sp0 + 4u, t17);
    if ((int32_t)(esi + 1u) < (int32_t)arg3)
    {
        ecx = esi + 1u;
        ebp = t16;
        esi = t16;
        loc_4 = t16;
        goto L_102aea59;
    }
    loc_4 = t16;
L_102aeaf2: ;
    return;
L_102aea82: ;
    ebp = loc_4;
    goto L_102aea86;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aea30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102aea30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
