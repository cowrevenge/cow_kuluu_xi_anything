/* f_0x102b74d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b74d0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, 4u);
    ebx = t1 + 0x10u;
    ebp = t1;
    edi = t1 + 0x10u;
L_102b74ec: ;
    if (rd32(edi) != 0u)
    {
        esi = rd32(edi);
        eax = 0u;
        ecx = esi + 0x10u;
L_102b74f7: ;
        if (rd32(ecx) == ebp) goto L_102b7506;
        if ((int32_t)(eax + 1u) < 4)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            goto L_102b74f7;
        }
    }
L_102b7521: ;
    t2 = rd32(sp0 + 8u) - 1u;
    t3 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t2);
    if (t3 != 1u)
    {
        edi = edi + 4u;
        goto L_102b74ec;
    }
    esi = ebp;
    edi = sp0 - 0x28u;
    ecx = 0xau;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = 0u;
    edx = arg3;
L_102b753e: ;
    if ((int32_t)(edx & 0x80000003u) >= 0)
    {
        eax = edx & 0x80000003u;
    }
    else
    {
        eax = edx & 0x80000003u;
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    t4 = rd32(eax * 4u + sp0 - 0x28u);
    wr32(ebp + ecx * 4u, t4);
    t5 = rd32(eax * 4u + sp0 - 0x18u);
    t6 = rd8(eax + sp0 - 8u);
    wr32(ebx + ecx * 4u, t5);
    wr8(ebp + ecx + 0x20u, (uint8_t)t6);
    if ((int32_t)(ecx + 1u) < 4)
    {
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_102b753e;
    }
    return;
L_102b7506: ;
    if ((int32_t)((uint32_t)(int8_t)rd8(eax + esi + 0x20u) - arg3 + 4u & 0x80000003u) >= 0)
    {
        ecx = (uint32_t)(int8_t)rd8(eax + esi + 0x20u) - arg3 + 4u & 0x80000003u;
    }
    else
    {
        ecx = (uint32_t)(int8_t)rd8(eax + esi + 0x20u) - arg3 + 4u & 0x80000003u;
        ecx = (ecx - 1u | 0xfffffffcu) + 1u;
    }
    wr8(eax + esi + 0x20u, (uint8_t)ecx);
    goto L_102b7521;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b74d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b74d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
