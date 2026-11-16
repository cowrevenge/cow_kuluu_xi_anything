/* f_0x10323a38 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10323a38(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (in_eax & 0xffff0000u) | rd16(rd32(sp0 + 8u) + 6u);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t1 & 0x8000u);
    if ((t1 >> 4u & 0x7ffu) == 0u)
    {
        eax = rd32(t2 + 4u) & 0xfffffu;
        ecx = t1 >> 4u & 0x7ffu;
        edx = rd32(t2);
        goto L_10323a86;
    }
    eax = rd32(t2 + 4u) & 0xfffffu;
    ecx = t1 >> 4u & 0x7ffu;
    edx = rd32(t2);
    ebx = t1 >> 4u & 0x7ffu;
    if (ebx == 0x7ffu)
    {
        edi = 0x7fffu;
        loc_8 = 0x80000000u;
    }
    else
    {
        edi = ecx + 0x3c00u;
        loc_8 = 0x80000000u;
    }
L_10323aa7: ;
    t3 = edx >> 0x15u | eax << 0xbu | loc_8;
    wr32(arg1 + 4u, t3);
    wr32(arg1, edx << 0xbu);
    ecx = t3;
L_10323abf: ;
    if ((ecx & 0x80000000u) != 0u) goto L_10323ae0;
    t4 = rd32(arg1) * 2u;
    t5 = rd32(arg1);
    wr32(arg1, t4);
    t6 = t5 >> 0x1fu | ecx * 2u;
    wr32(arg1 + 4u, t6);
    ecx = t6;
    edi = edi + 0xffffu;
    goto L_10323abf;
L_10323a86: ;
    if (eax != 0u) goto L_10323a9e;
    if (edx != 0u) goto L_10323a9e;
    wr32(arg1 + 4u, 0u);
    wr32(arg1, 0u);
    wr16(arg1 + 8u, 0u);
L_10323ae9: ;
    return;
L_10323a9e: ;
    edi = ecx + 0x3c01u;
    loc_8 = 0u;
    goto L_10323aa7;
L_10323ae0: ;
    wr16(arg1 + 8u, (uint16_t)(rd32(sp0 + 8u) | edi));
    goto L_10323ae9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323a38(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10323a38(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
