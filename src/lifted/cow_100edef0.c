/* f_0x100edef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100edef0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x104ca430u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104ca430u));
        if (eax != 2u) goto L_100edf22;
        t1 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
        g->ecx = t1;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10115870u), 1, t1);
        t2 = g->ecx;
        wr32(COW_IMG(0x104ca430u), 1u);
        ecx = t2;
L_100edf27: ;
        t3 = rd32(COW_IMG(0x104df770u)) + 0x13698u;
        t4 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
        g->esp = sp0;
        cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), ecx, 2, t4, t3);
        if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
        {
            eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
            ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
            edx = rd32(COW_IMG(0x104df770u));
            goto L_100edf83;
        }
        eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
        edx = rd32(COW_IMG(0x104df770u));
L_100edf58: ;
        if (ecx == 0xffffffffu) goto L_100edf83;
        t5 = rd32(edx + 0x13690u);
        g->esp = sp0;
        cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t5, 2, t5, eax);
        if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0u)
        {
            eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
            ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
            edx = rd32(COW_IMG(0x104df770u));
            goto L_100edf58;
        }
        eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
        edx = rd32(COW_IMG(0x104df770u));
L_100edf83: ;
        wr32(edx + 0x13690u, 0u);
        g->esp = sp0;
        cow_stdcall(g, COW_IMG(0x101152e0u), 0);
        wr32(COW_IMG(0x104ca430u), 0u);
    }
L_100edf9c: ;
    return 1u;
L_100edf22: ;
    if (eax != 1u) goto L_100edf9c;
    ecx = self;
    goto L_100edf27;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100edef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100edef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
