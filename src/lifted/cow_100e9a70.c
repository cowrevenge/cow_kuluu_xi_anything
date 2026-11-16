/* f_0x100e9a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e9a70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x70u, in_ebx);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_100e9c42;
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (!(rd8(ecx + 0x9816u) & 1u)) goto L_100e9c42;
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x74u, in_ebp);
    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x7cu, in_edi);
    edx = 0u;
    ebx = ecx + 0x9534u;
    esi = ecx + 0x9548u;
    loc_6c = 0u;
    loc_68 = 0u;
L_100e9ac4: ;
    if (rd32(esi) != 0u)
    {
        edi = rd32(esi);
        eax = 0u;
        ecx = ecx + loc_6c + 0x57ecu;
L_100e9add: ;
        if (edi == rd32(ecx)) goto L_100e9aec;
        if ((int32_t)(eax + 1u) < 20)
        {
            eax = eax + 1u;
            ecx = ecx + 0x70u;
            goto L_100e9add;
        }
        eax = eax + 1u;
L_100e9af1: ;
        if (eax == 0x14u)
        {
            wr8(ebx + edx, 0u);
            wr32(esi, 0u);
        }
    }
    else
    {
        wr8(ebx + edx, 0u);
    }
    if ((int32_t)(edx + 1u) < 20)
    {
        edx = edx + 1u;
        esi = esi + 4u;
        goto L_100e9abe;
    }
    wr32(sp0 - 0x68u, loc_68 + 0x64u);
    wr32(sp0 - 0x6cu, loc_6c + 0x8c4u);
    if ((int32_t)(loc_68 + 0x64u) < 700)
    {
        ebx = loc_68 + 0x64u;
        loc_6c = loc_6c + 0x8c4u;
        loc_68 = loc_68 + 0x64u;
        goto L_100e9aaa;
    }
    ebx = loc_68 + 0x64u;
    edx = 0u;
L_100e9b2c: ;
    t1 = rd32(COW_IMG(0x104dfd98u));
    edi = sp0 - 0x64u;
    eax = 0u;
    ecx = 0x19u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = sp0 - 0x64u;
    ecx = sp0 - 0x50u;
    ebp = edx * 0x64u + t1 + 0x9534u;
    esi = 0u;
L_100e9b56: ;
    if (edx != 0u) goto L_100e9b6f;
    if (esi != 0u) goto L_100e9b6f;
    t2 = rd32(COW_IMG(0x104dfd98u));
    wr8(eax, 0u);
    edi = rd32(t2 + 0x57ecu);
L_100e9b7c: ;
    wr32(ecx, edi);
    eax = eax + 1u;
    ecx = ecx + 4u;
L_100e9b82: ;
    if ((int32_t)(esi + 1u) < 20)
    {
        esi = esi + 1u;
        goto L_100e9b56;
    }
    esi = sp0 - 0x64u;
    edi = ebp;
    ecx = 0x19u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(edx + 1u) < 7)
    {
        edx = edx + 1u;
        goto L_100e9b2c;
    }
    esi = 0u;
L_100e9b9d: ;
    wr32(sp0 - 0x6cu, 0u);
    eax = rd32(COW_IMG(0x104dfd98u));
    ebx = esi * 0x64u + rd32(COW_IMG(0x104dfd98u)) + 0x9534u;
    ebp = 0u;
    loc_6c = 0u;
L_100e9bb5: ;
    if (esi != 0u) goto L_100e9bbd;
    if (ebp == 0u) goto L_100e9c1a;
L_100e9bbd: ;
    if (rd32(ebp + esi * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57ecu) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        edi = rd32(ebp + esi * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57ecu);
        eax = 0u;
        ecx = ebx + 0x14u;
        edx = ebx + 0x14u;
L_100e9be9: ;
        if (rd32(ecx) == edi) goto L_100e9bf6;
        if ((int32_t)(eax + 1u) < 20)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            goto L_100e9be9;
        }
        eax = eax + 1u;
L_100e9bf6: ;
        if (eax == 0x14u)
        {
            eax = 0u;
            ecx = edx;
L_100e9bff: ;
            if (rd32(ecx) == 0u) goto L_100e9c0f;
            if ((int32_t)(eax + 1u) < 20)
            {
                eax = eax + 1u;
                ecx = ecx + 4u;
                goto L_100e9bff;
            }
            eax = eax + 1u;
        }
    }
L_100e9c1a: ;
    wr32(sp0 - 0x6cu, loc_6c + 1u);
    if ((int32_t)(ebp + 0x70u) < 2240)
    {
        ebp = ebp + 0x70u;
        loc_6c = loc_6c + 1u;
        goto L_100e9bb5;
    }
    if ((int32_t)(esi + 1u) < 7)
    {
        esi = esi + 1u;
        goto L_100e9b9d;
    }
    return (eax & 0xffffff00u) | 1u;
L_100e9aaa: ;
    ecx = rd32(COW_IMG(0x104dfd98u));
    edx = 0u;
    esi = ebx + rd32(COW_IMG(0x104dfd98u)) + 0x9548u;
    ebx = ebx + rd32(COW_IMG(0x104dfd98u)) + 0x9534u;
    goto L_100e9ac4;
L_100e9abe: ;
    ecx = rd32(COW_IMG(0x104dfd98u));
    goto L_100e9ac4;
L_100e9aec: ;
    wr8(ebx + edx, (uint8_t)eax);
    wr32(esi, edi);
    goto L_100e9af1;
L_100e9b6f: ;
    if (rd32(ebp + esi * 4u + 0x14u) == 0u) goto L_100e9b82;
    edi = rd32(ebp + esi * 4u + 0x14u);
    t3 = rd8(ebp + esi);
    wr8(eax, (uint8_t)t3);
    ebx = (ebx & 0xffffff00u) | t3;
    goto L_100e9b7c;
L_100e9c0f: ;
    wr8(eax + ebx, (uint8_t)loc_6c);
    wr32(eax * 4u + ebx + 0x14u, edi);
    goto L_100e9c1a;
L_100e9c42: ;
    return in_eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
