/* f_0x10284aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10284aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;

    if ((int32_t)(rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u) <= 0)
    {
        ecx = 0u;
        edx = 0u;
    }
    else
    {
        esi = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
        edi = rd32(COW_IMG(0x1099d200u));
        eax = edi + 0xa20u;
        ecx = 0u;
        edx = 0u;
L_10284abf: ;
        if (esi != 1u)
        {
            ecx = ecx | rd32(eax);
            edx = edx | rd32(eax + 4u);
            eax = eax + 8u;
            esi = esi - 1u;
            goto L_10284abf;
        }
        ecx = ecx | rd32(eax);
        edx = edx | rd32(eax + 4u);
    }
    if ((int32_t)rd32(COW_IMG(0x109a2744u)) <= 0)
    {
        eax = 0u;
        esi = rd32(COW_IMG(0x109a2744u));
        goto L_10284af5;
    }
    eax = 0u;
    esi = rd32(COW_IMG(0x109a2744u));
L_10284ada: ;
    if (rd32(COW_IMG(0x103b5910u) + eax * 8u) != ecx) goto L_10284af0;
    if (rd32(COW_IMG(0x103b5914u) + eax * 8u) == edx) goto L_10284b21;
L_10284af0: ;
    if ((int32_t)(eax + 1u) < (int32_t)esi)
    {
        eax = eax + 1u;
        goto L_10284ada;
    }
    eax = eax + 1u;
L_10284af5: ;
    wr32(COW_IMG(0x103b5910u) + esi * 8u, ecx);
    t2 = COW_IMG(0x103b4910u) + esi * 4u;
    wr32(COW_IMG(0x103b5914u) + esi * 8u, edx);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10284970u), 1, t2);
    t3 = rd32(COW_IMG(0x109a2744u)) + 1u;
    wr32(COW_IMG(0x109a2744u), t3);
    return;
L_10284b21: ;
    t1 = rd32(COW_IMG(0x103b4910u) + eax * 4u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x130u), rd32(COW_IMG(0x1066941cu)), 2, rd32(COW_IMG(0x1066941cu)), t1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10284aa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
