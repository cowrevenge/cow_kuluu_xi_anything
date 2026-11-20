/* f_0x1032435e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Reads one or two bytes from a stream-like object and decodes a 16-bit value, falling back to helper calls when the cached count goes negative.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1032435e(Guest* g, uint32_t sp0, uint32_t esi, uint32_t eax)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t cnt;
    uint32_t local;
    uint32_t table;
    uint32_t res;

    /* [ebp - 4] is sp0 - 8, because ebp = sp0 - 4 after "push ebp; mov ebp, esp". */
    local = cow_frame(g, sp0, 8u);

    if ((rd8(esi + 0xcu) & 0x40u) != 0u)
    {
        goto path_10324432;
    }

    eax = rd32(esi + 0x10u);
    if (eax == 0xFFFFFFFFu)
    {
        eax = COW_IMG(0x103d2c10u);
    }
    else
    {
        ecx = (uint32_t)((int32_t)eax >> 5);       /* sar ecx, 5 */
        eax &= 0x1fu;
        ecx = rd32(COW_IMG(0x109f82e0u) + ecx * 4u);
        eax = eax + eax * 8u;                      /* lea eax, [eax + eax*8] */
        eax = ecx + eax * 4u;                      /* lea eax, [ecx + eax*4] */
    }

    if ((rd8(eax + 4u) & 0x80u) == 0u)
    {
        goto path_10324432;
    }

    cnt = rd32(esi + 4u) - 1u;
    wr32(esi + 4u, cnt);
    edi = 1u;

    if ((int32_t)cnt < 0)
    {
        eax = cow_cdecl(g, COW_IMG(0x10319505u), 1u, esi);
    }
    else
    {
        ecx = rd32(esi);
        eax = rd8(ecx);                            /* movzx eax, byte ptr [ecx] */
        ecx = ecx + 1u;
        wr32(esi, ecx);
    }

    if (eax == 0xFFFFFFFFu)
    {
        goto label_103243bd;
    }

    wr8(local, (uint8_t)eax);                      /* mov byte ptr [ebp - 4], al */

    ecx = rd32(COW_IMG(0x103d0030u));
    if ((rd8(ecx + (eax & 0xffu) * 2u + 1u) & 0x80u) == 0u)
    {
        goto label_10324409;
    }

    cnt = rd32(esi + 4u) - 1u;
    wr32(esi + 4u, cnt);

    if ((int32_t)cnt < 0)
    {
        eax = cow_cdecl(g, COW_IMG(0x10319505u), 1u, esi);
    }
    else
    {
        ecx = rd32(esi);
        eax = rd8(ecx);                            /* movzx eax, byte ptr [ecx] */
        ecx = ecx + 1u;
        wr32(esi, ecx);
    }

    if (eax == 0xFFFFFFFFu)
    {
        eax = (uint32_t)(int32_t)(int8_t)rd8(local); /* movsx eax, byte ptr [ebp - 4] */
        eax = cow_cdecl(g, COW_IMG(0x10324641u), 2u, eax, esi);
        goto label_103243bd;
    }

    wr8(local + 1u, (uint8_t)eax);                 /* mov byte ptr [ebp - 3], al */
    edi = 2u;

label_10324409:
    /* FUN_10324215(&[ebp + 0xa], &[ebp - 4], edi) */
    res = cow_cdecl(g,
                    COW_IMG(0x10324215u),
                    3u,
                    sp0 + 6u,
                    local,
                    edi);

    if (res != 0xFFFFFFFFu)
    {
        /* mov ax, word ptr [ebp + 0xa] only changes the low 16 bits. */
        return (res & 0xFFFF0000u) | (uint32_t)rd16(sp0 + 6u);
    }

    eax = cow_cdecl(g, COW_IMG(0x10319c89u), 0u);
    wr32(eax, 0x2au);
    goto label_103243bd;

path_10324432:
    cnt = rd32(esi + 4u) - 2u;
    wr32(esi + 4u, cnt);

    if ((int32_t)cnt < 0)
    {
        eax = cow_cdecl(g, COW_IMG(0x10326275u), 1u, esi);
        goto label_1032444b;
    }

    ecx = rd32(esi);
    /* mov ax, word ptr [ecx] only changes the low 16 bits of eax. */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx);
    ecx = ecx + 2u;
    wr32(esi, ecx);
    goto label_1032444b;

label_103243bd:
    /* or ax, 0xffff only changes the low 16 bits of eax. */
    eax = (eax & 0xFFFF0000u) | 0xFFFFu;

label_1032444b:
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032435e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t entry_eax = g->eax;
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebp = g->ebp;

    const uint32_t result = cow_fn_1032435e(g, sp0, rd32(sp0 + 4u), entry_eax);

    g->esp = sp0;
    g->ebx = entry_ebx;
    g->esi = entry_esi;
    g->edi = entry_edi;
    g->ebp = entry_ebp;

    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
